#!/bin/bash
#SBATCH -J sb_chk_gcc_reg
#SBATCH -o sb_chk_gcc_reg.o%j.txt
#SBATCH -p alipour

# Note: gcc 4.8.2 -O0 vs -O3

path_tc="/project/alipour/rabin/bin/gcc_regression_tc"
path_file="${path_tc}/gcc_regression_tc.txt"

tout=10

m_tc=0 # TestCase
m_cb=0 # CrashBug
m_to=0 # TimeOut
m_ct=0 # CrashBug or TimeOut
m_wc=0 # WrongCode

function remove_temp {
    rm -rf *.c *.out *.txt *.info 2> /dev/null
}

function dump_tc {
    src=$1
    dst=save_tc/$2/$1
    cp -- $src $dst
}

function compile_tc {
    tc=$1
    vn=$2
    ol=$3

    #ground-truth (-O0)
    out=$tc-$vn.out
    timeout $tout /project/alipour/rabin/bin/gcc482-bin/bin/gcc -I /project/alipour/rabin/bin/csmith230-bin/include/csmith-2.3.0 -w -msse4.2 $tc -o $out 2> /dev/null
    if [ $? -ne 0 ]; then m_cb=$((m_cb+1)); dump_tc $1 "cb"; return 1; fi
    timeout $tout ./$out > $out.txt 2> /dev/null
    if [ $? -ne 0 ]; then m_to=$((m_to+1)); return 1; fi

    #optimization-level (-O3)
    out=$tc-$vn-$ol.out
    timeout $tout /project/alipour/rabin/bin/gcc482-bin/bin/gcc -O$ol -I /project/alipour/rabin/bin/csmith230-bin/include/csmith-2.3.0 -w -msse4.2 $tc -o $out 2> /dev/null
    if [ $? -ne 0 ]; then
        echo "CrashBug" > $out.txt
    else
        timeout $tout ./$out > $out.txt 2> /dev/null
        if [ $? -ne 0 ]; then echo "TimeOut" > $out.txt; fi
    fi

    #dump_diff
    dump_diff $1 $2
}

function dump_diff {
    for i in `ls $1-$2.out.txt`; do
        for j in `ls $1-$2-*.out.txt`; do
            if [ "$i" != "$j" ]; then
                diff $i $j &> /dev/null
                if [ $? -ne 0 ]; then
                    k="$i -> `cat $i` : $j -> `cat $j`"
                    echo $k >> save_st/WrongCode.txt
                    m_wc=$((m_wc+1));
                    dump_tc $1 "wc"
                fi
            fi
        done
    done
}

function experiment_tc {
    v="4.8.2"
    o="3"
    compile_tc $1 $v $o
}

function exec_gcc_reg {
    while IFS='' read -r tc || [[ -n "$tc" ]]; do
        m_tc=$((m_tc+1))
        ftc=${path_tc}/$tc
        cp $ftc .
        experiment_tc $tc
        remove_temp
    done < "$path_file"
}

cd /project/alipour/rabin/chk-gcc-reg
mkdir save_st save_tc
mkdir save_tc/cb save_tc/wc
touch save_st/WrongCode.txt
exec_gcc_reg
echo; echo m_tc=$m_tc m_cb=$m_cb m_to=$m_to m_wc=$m_wc; echo
