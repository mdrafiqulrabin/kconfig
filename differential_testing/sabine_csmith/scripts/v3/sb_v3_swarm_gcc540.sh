#!/bin/bash
#SBATCH -J sb_v3_swarm_gcc540_r1
#SBATCH -o sb_v3_swarm_gcc540_r1.o%j.txt
#SBATCH -t 13:01:01
#SBATCH -p alipour

# Note: gcc 5.4.0 -O0 vs -O3

tout=10

m_cs=0 # CSmith
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
    timeout $tout /project/alipour/rabin/bin/gcc540-bin/bin/gcc -I /project/alipour/rabin/bin/csmith230-bin/include/csmith-2.3.0 -w -msse4.2 $tc -o $out 2> /dev/null
    if [ $? -ne 0 ]; then m_cb=$((m_cb+1)); dump_tc $1 "cb"; return 1; fi
    timeout $tout ./$out > $out.txt 2> /dev/null
    if [ $? -ne 0 ]; then m_to=$((m_to+1)); return 1; fi

    #optimization-level (-O3)
    out=$tc-$vn-$ol.out
    timeout $tout /project/alipour/rabin/bin/gcc540-bin/bin/gcc -O$ol -I /project/alipour/rabin/bin/csmith230-bin/include/csmith-2.3.0 -w -msse4.2 $tc -o $out 2> /dev/null
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
    v="5.4.0"
    o="3"
    compile_tc $1 $v $o
}

function exec_csmith {
    args=`python /project/alipour/rabin/scripts/swarm_csmith_args.py`
    TCNAME=$(date +%Y%m%d%H%M%S%N).c
    /project/alipour/rabin/scripts/csmith.sh $args > $TCNAME
    if [ $? -ne 0 ]; then m_cs=$((m_cs+1)); return 1; fi
    m_tc=$((m_tc+1))
    experiment_tc $TCNAME
}

function run_tc_timer {
    START=$(date +%s)
    limit=1*60*60*13
    while [ $(($(date +%s) - limit)) -lt $START ]; do
        exec_csmith
        remove_temp
    done
}

function run_tc_one {
    exec_csmith
}

cd /project/alipour/rabin/main/run/gcc540/
mkdir save_st save_tc
mkdir save_tc/cb save_tc/wc
touch save_st/WrongCode.txt
#run_tc_one
run_tc_timer
echo; echo m_cs=$m_cs m_tc=$m_tc m_cb=$m_cb m_to=$m_to m_wc=$m_wc; echo
