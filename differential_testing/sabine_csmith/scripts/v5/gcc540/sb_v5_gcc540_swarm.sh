#!/bin/bash
#SBATCH -J sb_v5_gcc540_swarm
#SBATCH -o sb_v5_gcc540_swarm.o%j.txt
#SBATCH -t 13:01:01
#SBATCH -p alipour

# Note: gcc 5.4.0 -O0 vs -O3

tout=10 # Timeout
m_tc=0  # TestCase

function remove_temp {
    rm -rf *.c *.out *.txt *.info 2> /dev/null
}

function dump_tc {
    src=$1
    dst=save_tc/$2/$1
    cp -- $src $dst
}

function compile_tc {
    tc=$1; vn=$2; ol=$3

    m_cb1=0; m_cb2=0;
    m_to1=0; m_to2=0;

    # -O0
    out1=$tc-$vn.out
    /project/alipour/rabin/bin/gcc540-bin/bin/gcc -I /project/alipour/rabin/bin/csmith230-bin/include/csmith-2.3.0 -w -msse4.2 $tc -o $out1 2> /dev/null
    if [ $? -ne 0 ]; then
        m_cb1=$((m_cb1+1));
    else
        timeout $tout ./$out1 > "$out1.txt" 2> /dev/null
        if [ $? -ne 0 ]; then
            m_to1=$((m_to1+1));
        fi
    fi

    # -O3
    out2=$tc-$vn-$ol.out
    /project/alipour/rabin/bin/gcc540-bin/bin/gcc -O$ol -I /project/alipour/rabin/bin/csmith230-bin/include/csmith-2.3.0 -w -msse4.2 $tc -o $out2 2> /dev/null
    if [ $? -ne 0 ]; then
        m_cb2=$((m_cb2+1));
    else
        timeout $tout ./$out2 > "$out2.txt" 2> /dev/null
        if [ $? -ne 0 ]; then
            m_to2=$((m_to2+1));
        fi
    fi

    # crash bug
    if [ $m_cb1 -ne 0 ] && [ $m_cb2 -eq 0 ]; then
        dump_tc "$tc" "cb1";
        echo "$tc" >> save_st/cb1.txt;
    elif [ $m_cb1 -eq 0 ] && [ $m_cb2 -ne 0 ]; then
        dump_tc "$tc" "cb2";
        echo "$tc" >> save_st/cb2.txt;
    elif [ $m_cb1 -ne 0 ] && [ $m_cb2 -ne 0 ]; then
        dump_tc "$tc" "cb3";
        echo "$tc" >> save_st/cb3.txt;
    fi

    # time out
    if [ $m_to1 -ne 0 ] && [ $m_to2 -eq 0 ]; then
        dump_tc "$tc" "to1";
        echo "$tc" >> save_st/to1.txt;
    elif [ $m_to1 -eq 0 ] && [ $m_to2 -ne 0 ]; then
        dump_tc "$tc" "to2";
        echo "$tc" >> save_st/to2.txt;
    elif [ $m_to1 -ne 0 ] && [ $m_to2 -ne 0 ]; then
        dump_tc "$tc" "to3";
        echo "$tc" >> save_st/to3.txt;
    fi

    # wrong code
    if [ $m_to1 -eq 0 ] && [ $m_to2 -eq 0 ] && [ $m_cb1 -eq 0 ] && [ $m_cb2 -eq 0 ]; then
        dump_diff $1 $2
    fi
}

function dump_diff {
    for i in `ls $1-$2.out.txt`; do
        for j in `ls $1-$2-*.out.txt`; do
            if [ "$i" != "$j" ]; then
                diff $i $j &> /dev/null
                if [ $? -ne 0 ]; then
                    e="$i -> `cat $i` : $j -> `cat $j`"
                    echo $e >> save_st/wc.txt
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
    tc=$(date +%Y%m%d%H%M%S%N).c
    /project/alipour/rabin/scripts/csmith.sh $args > $tc
    if [ $? -ne 0 ]; then return 1; fi
    m_tc=$((m_tc+1))
    experiment_tc $tc
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

function save_result {
    cb1=`cat save_st/cb1.txt | wc -l`
    cb2=`cat save_st/cb2.txt | wc -l`
    cb3=`cat save_st/cb3.txt | wc -l`
    cb=$((cb1+cb2+cb3))
    to1=`cat save_st/to1.txt | wc -l`
    to2=`cat save_st/to2.txt | wc -l`
    to3=`cat save_st/to3.txt | wc -l`
    to=$((to1+to2+to3))
    wc=`cat save_st/wc.txt | wc -l`
    r="swarm(r3)&$m_tc&$cb1&$cb2&$cb3&$cb&$to1&$to2&$to3&$to&$wc  \\\\"
    echo "$r" >> /project/alipour/rabin/main/result540.txt
    echo "$r"
}

cd /project/alipour/rabin/main/gcc540/
mkdir swarm; cd swarm

mkdir save_tc save_st
mkdir save_tc/cb1 save_tc/cb2 save_tc/cb3
mkdir save_tc/to1 save_tc/to2 save_tc/to3
mkdir save_tc/wc
touch save_st/cb1.txt save_st/cb2.txt save_st/cb3.txt
touch save_st/to1.txt save_st/to2.txt save_st/to3.txt
touch save_st/wc.txt

#run_tc_one
run_tc_timer
save_result
