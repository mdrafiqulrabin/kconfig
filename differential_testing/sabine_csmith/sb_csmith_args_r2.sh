#!/bin/bash
#SBATCH -J sb_csmith_r2
#SBATCH -o sb_csmith_r2.o%j
#SBATCH -t 06:00:01

# Note:
# run2: gcc 4.8.2 without optimization on tc found with optimization

tout1=5
tout2=10

m_cs=0 # CSmith
m_tc=0 # TestCase
m_cb=0 # CrashBug
m_to=0 # TimeOut
m_ct=0 # CrashBug or TimeOut
m_wc=0 # WrongCode

function compile_tc {
    tc=$1
    vn=$2

    out=$tc-$vn.out
    timeout $tout1 /project/alipour/rabin/bin/gcc482-bin/bin/gcc -I /project/alipour/rabin/bin/csmith230-bin/include/csmith-2.3.0 -w $tc -o $out 2> /dev/null
    if [ $? -ne 0 ]; then
        timeout $tout2 /project/alipour/rabin/bin/gcc482-bin/bin/gcc -I /project/alipour/rabin/bin/csmith230-bin/include/csmith-2.3.0 -w $tc -o $out 2> /dev/null
            if [ $? -ne 0 ]; then m_cb=$((m_cb+1)); echo > $out; echo $out >> CrashBug2.txt; return 1;  fi
    fi

    dump_output $1 $2
}

function dump_output {
    for i in `ls $1-$2.out`; do
        timeout $tout1 ./$i > $i.txt 2> /dev/null
        if [ $? -ne 0 ]; then
            timeout $tout2 ./$i > $i.txt 2> /dev/null
            if [ $? -ne 0 ]; then m_to=$((m_to+1)); echo > $i.txt; echo $i >> TimeOut2.txt; return 1; fi
        fi
    done

    dump_diff $1 $2
}

function dump_diff {
    for i in `ls $1-$2.out.txt`; do
        c=$(cat $i | wc -w) #Output is 'checksum = ???', so break if [$c -ne 3]
        if [ $c -ne 3 ]; then echo "$i -> `cat $i`"; m_ct=$((m_ct+1)); break; fi
        for j in `ls $1-$2-*.out.txt`; do
        if [ "$i" != "$j" ]; then
            diff $i $j &> /dev/null
            if [ $? -ne 0 ]; then
                k="$i -> `cat $i` : $j -> `cat $j`"
                echo $k; echo $k >> WrongCode.txt
                m_wc=$((m_wc+1));
                save_tc $1
            fi
        fi
        done
    done
}

function experiment_tc {
    v="4.8.2"
    compile_tc $1 $v
}

function exec_run2 {
    for i in `ls *.c`; do
        m_tc=$((m_tc+1))
        experiment_tc $i
    done
}

cd /project/alipour/rabin/main/run
exec_run2
echo; echo m_cs=$m_cs m_tc=$m_tc m_cb=$m_cb m_to=$m_to m_ct=$m_ct m_wc=$m_wc; echo
