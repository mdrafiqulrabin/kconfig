#!/bin/bash

# Note: gcc 4.8.2

path_tc="/Users/mdrafiqulrabin/Desktop/GitHub/Doctoral-Research/gcc-regression/c_files/c_files_wc"
path_file="${path_tc}/gcc_regression_tc_ast.txt"
path_file="/Users/mdrafiqulrabin/Desktop/GitHub/Doctoral-Research/gcc-regression/dump_ast/ast_files/ast_pycparser/gcc_regression_tc_ast.txt"

tout=10

m_tc=0 # TestCase
m_cb=(0 0 0 0) # CrashBug

function remove_temp {
    rm -rf *.c *.out *.txt *.info 2> /dev/null
}

function compile_tc {
    tc=$1
    vn=$2
    for ol in {0..3}; do
        out=$tc-$vn-$ol.out
        gtimeout $tout gcc482.sh -c -O$ol -w -msse4.2 $tc -o $out 2> cb.txt
        flag=$?
        if [ $flag -ne 0 ]; then
            echo "$flag = $1"
            cat cb.txt
            echo;echo;echo
            if [ `cat cb.txt|wc -w` -ne 0 ]; then
                m_cb[$ol]=$((m_cb[$ol]+1))
                cat cb.txt > save_st/$out.txt
                echo "$out" >> save_st/CrashBug.txt
            fi
        fi
    done
}

function experiment_tc {
    v="4.8.2"
    compile_tc $1 $v
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

mkdir gcc482; cd gcc482
mkdir save_st
touch save_st/CrashBug.txt
exec_gcc_reg
echo; for i in {0..3}; do echo "[-O$i] = ${m_cb[$i]}"; done; echo
