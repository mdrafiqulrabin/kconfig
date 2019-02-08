#!/bin/bash
#SBATCH -J sb_cb_gcc_reg_gcc540
#SBATCH -o sb_cb_gcc_reg_gcc540.o%j.txt
#SBATCH -t 12:01:01
#SBATCH -p alipour

# Note: gcc 5.4.0 -O0 vs -O3

path_tc="/project/alipour/rabin/bin/gcc_regression_tc"
path_file="${path_tc}/gcc_regression_tc_ast.txt"

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
        timeout $tout /project/alipour/rabin/bin/gcc540-bin/bin/gcc -c -O$ol -I /project/alipour/rabin/bin/csmith230-bin/include/csmith-2.3.0 -w -msse4.2 $tc -o $out 2> cb.txt
        if [ `cat cb.txt|wc -w` -ne 0 ]; then
            m_cb[$ol]=$((m_cb[$ol]+1))
            cat cb.txt > save_st/$out.txt
            echo "$out" >> save_st/CrashBug.txt
        fi
    done
}

function experiment_tc {
    v="5.4.0"
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

cd /project/alipour/rabin/gcc-reg-cb
mkdir gcc540; cd gcc540
mkdir save_st
touch save_st/CrashBug.txt
exec_gcc_reg
echo; for i in {0..3}; do echo "[-O$i] = ${m_cb[$i]}"; done; echo
