#!/bin/bash

# set-params
tout=60 # 1 min
m_path_input=""
m_path_output=""
m_path_csmith="/project/alipour/rabin/kconfig/data/csmith_n"
m_path_gcc="/project/alipour/rabin/kconfig/recycle/gcc_10k_t60/gcc_t60"
m_args=""
m_version=""
m_run=""
m_tc=0

# method
function remove_temp {
    rm -rf $m_path_output/*.out $m_path_output/*out*.txt 2> /dev/null
}

function compile_tc {
    tc="$1"; vn="${m_version}";

    m_cb0=0; m_cb3=0;
    m_to0=0; m_to3=0;

    # -O0
    out0="$tc-$vn-0.out"
    /project/alipour/rabin/bin/gcc$vn-bin/bin/gcc -I /project/alipour/rabin/bin/csmith230-bin/include/csmith-2.3.0 -w -msse4.2 "$m_path_input/$tc" -o "$m_path_output/$out0" 2> /dev/null
    if [ $? -ne 0 ]; then
        m_cb0=$((m_cb0+1));
    else
        timeout $tout "$m_path_output/$out0" > "$m_path_output/$out0.txt" 2> /dev/null
        if [ $? -ne 0 ]; then
            m_to0=$((m_to0+1));
        fi
    fi

    # -O3
    out3="$tc-$vn-3.out"
    /project/alipour/rabin/bin/gcc$vn-bin/bin/gcc -O3 -I /project/alipour/rabin/bin/csmith230-bin/include/csmith-2.3.0 -w -msse4.2 "$m_path_input/$tc" -o "$m_path_output/$out3" 2> /dev/null
    if [ $? -ne 0 ]; then
        m_cb3=$((m_cb3+1));
    else
        timeout $tout "$m_path_output/$out3" > "$m_path_output/$out3.txt" 2> /dev/null
        if [ $? -ne 0 ]; then
            m_to3=$((m_to3+1));
        fi
    fi

    # crash bug
    if [ $m_cb0 -ne 0 ] && [ $m_cb3 -eq 0 ]; then
        echo "$tc" >> "$m_path_output/cb0.txt";
    elif [ $m_cb0 -eq 0 ] && [ $m_cb3 -ne 0 ]; then
        echo "$tc" >> "$m_path_output/cb3.txt";
    elif [ $m_cb0 -ne 0 ] && [ $m_cb3 -ne 0 ]; then
        echo "$tc" >> "$m_path_output/cb03.txt";
    fi

    # time out
    if [ $m_to0 -ne 0 ] && [ $m_to3 -eq 0 ]; then
        echo "$tc" >> "$m_path_output/to0.txt";
    elif [ $m_to0 -eq 0 ] && [ $m_to3 -ne 0 ]; then
        echo "$tc" >> "$m_path_output/to3.txt";
    elif [ $m_to0 -ne 0 ] && [ $m_to3 -ne 0 ]; then
        echo "$tc" >> "$m_path_output/to03.txt";
    fi

    # miscompilation
    if [ $m_to0 -eq 0 ] && [ $m_to3 -eq 0 ] && [ $m_cb0 -eq 0 ] && [ $m_cb3 -eq 0 ]; then
        dump_diff $tc $vn
    fi
}

function dump_diff {
    i="$m_path_output/$1-$2-0.out.txt"
    j="$m_path_output/$1-$2-3.out.txt"
    diff $i $j &> /dev/null
    if [ $? -ne 0 ]; then
        err="$i -> `cat $i` : $j -> `cat $j`"
        echo "$err" >> "$m_path_output/mc.txt"
    fi
}

function exec_gcc {
    for tc in "$m_path_input"/*.c
    do
        m_tc=$((m_tc+1))
        tc="${tc##*/}"
        compile_tc "$tc"
        remove_temp
    done
}

function result {
    cb0=`cat $m_path_output/cb0.txt | wc -l`
    cb3=`cat $m_path_output/cb3.txt | wc -l`
    cb03=`cat $m_path_output/cb03.txt | wc -l`
    cb=$((cb0+cb3+cb03))
    to0=`cat $m_path_output/to0.txt | wc -l`
    to3=`cat $m_path_output/to3.txt | wc -l`
    to03=`cat $m_path_output/to03.txt | wc -l`
    to=$((to0+to3+to03))
    mc=`cat $m_path_output/mc.txt | wc -l`
    res="$m_version & $m_args($m_run) & $m_tc & $cb0 & $cb3 & $cb03 & $cb & $to0 & $to3 & $to03 & $to & $mc  \\\\"
    echo "$res" >> "$m_path_gcc/$m_version/result.txt"
    #echo "$res"
}

function init {
    m_path_input="$m_path_csmith/$m_args/$m_run"
    m_path_output="$m_path_gcc/$m_version/$m_args/$m_run"
    mkdir -p "$m_path_output"  2> /dev/null
    touch $m_path_output/cb0.txt $m_path_output/cb3.txt $m_path_output/cb03.txt $m_path_output/to0.txt $m_path_output/to3.txt $m_path_output/to03.txt $m_path_output/mc.txt
}

function main {
    init
    exec_gcc
    result
}

ver=("482" "540" "610" "710" "810" "910" "trunk")
arg=("default" "swarm" "kconfig")
run=("1") #("1" "2" "3")
for v in "${ver[@]}"
do
    for a in "${arg[@]}"
    do
        for r in "${run[@]}"
        do
            m_tc=0
            m_version="$v" #510~910
            m_args="$a" #default/swarm/kconfig
            m_run="r$r" #1~3

            start_time="$(date -u +%s)"
            main #init, execute & result
            end_time="$(date -u +%s)"
            elapsed_time="$(($end_time-$start_time))"

            res="$m_version,$m_args,$m_run,$start_time,$end_time,$elapsed_time"
            echo "$res" >> "$m_path_gcc/$m_version/time.txt"
        done
    done
done
