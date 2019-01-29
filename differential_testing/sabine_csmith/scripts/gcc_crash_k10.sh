#!/bin/bash
#SBATCH -J gcc_crash_k10
#SBATCH -o gcc_crash_k10.o%j
#SBATCH -t 12:01:01
#SBATCH -p alipour

# Note: gcc 7.1.0 -O0 vs -O3

tout=10

m_cs=0 # CSmith
m_tc=0 # TestCase
m_cb=0 # CrashBug

ary_centroids_k10=(
" --comma-operators --no-argc --no-bitfields --no-arrays --pointers --structs --no-unions --no-packed-struct --no-divs --no-muls --no-pre-incr-operator --no-pre-decr-operator --no-post-incr-operator --no-post-decr-operator --no-unary-plus-operator --no-longlong --no-float --jumps --no-volatiles --compound-assignment --no-consts --no-inline-function --no-volatile-pointers --no-const-pointers     --no-builtins --no-int8 --no-uint8"

" --no-comma-operators --no-argc --no-bitfields --no-arrays --no-pointers --no-structs --no-unions --no-packed-struct --no-divs --no-muls --no-pre-incr-operator --no-pre-decr-operator --no-post-incr-operator --no-post-decr-operator --no-unary-plus-operator --no-longlong --no-float --jumps --no-volatiles --no-compound-assignment --no-consts --no-inline-function --no-volatile-pointers --no-const-pointers --no-global-variables --no-builtins --no-int8 --no-uint8"

" --comma-operators --no-argc --no-bitfields --arrays --pointers --no-structs --no-unions --no-packed-struct --no-divs --no-muls --no-pre-incr-operator --no-pre-decr-operator --no-post-incr-operator --no-post-decr-operator --no-unary-plus-operator --no-longlong --no-float --jumps --no-volatiles --compound-assignment --no-consts --no-inline-function --no-volatile-pointers --no-const-pointers     --builtins --no-int8 --no-uint8"

" --no-comma-operators --no-argc --no-bitfields --no-arrays --no-pointers --no-structs --no-unions --no-packed-struct --no-divs --no-muls --no-pre-incr-operator --no-pre-decr-operator --no-post-incr-operator --no-post-decr-operator --no-unary-plus-operator --no-longlong --no-float --jumps --no-volatiles --no-compound-assignment --no-consts --no-inline-function --no-volatile-pointers --no-const-pointers     --builtins --no-int8 --no-uint8"

" --comma-operators --no-argc --no-bitfields --no-arrays --no-pointers --no-structs --no-unions --no-packed-struct --no-divs --no-muls --no-pre-incr-operator --no-pre-decr-operator --post-incr-operator --no-post-decr-operator --no-unary-plus-operator --no-longlong --no-float --jumps --no-volatiles --compound-assignment --no-consts --no-inline-function --no-volatile-pointers --no-const-pointers     --builtins --no-int8 --no-uint8"

" --comma-operators --no-argc --no-bitfields --no-arrays --no-pointers --no-structs --no-unions --no-packed-struct --no-divs --no-muls --no-pre-incr-operator --no-pre-decr-operator --no-post-incr-operator --no-post-decr-operator --no-unary-plus-operator --no-longlong --no-float --jumps --no-volatiles --no-compound-assignment --no-consts --no-inline-function --no-volatile-pointers --no-const-pointers --no-global-variables --no-builtins --no-int8 --no-uint8"

" --comma-operators --no-argc --no-bitfields --no-arrays --pointers --no-structs --no-unions --no-packed-struct --no-divs --no-muls --no-pre-incr-operator --no-pre-decr-operator --post-incr-operator --no-post-decr-operator --no-unary-plus-operator --no-longlong --no-float --jumps --no-volatiles --compound-assignment --no-consts --no-inline-function --no-volatile-pointers --no-const-pointers --no-global-variables --no-builtins --no-int8 --no-uint8"

" --comma-operators --no-argc --no-bitfields --no-arrays --no-pointers --no-structs --no-unions --no-packed-struct --no-divs --no-muls --pre-incr-operator --no-pre-decr-operator --no-post-incr-operator --no-post-decr-operator --unary-plus-operator --no-longlong --no-float --no-jumps --no-volatiles --compound-assignment --no-consts --no-inline-function --no-volatile-pointers --no-const-pointers     --no-builtins --no-int8 --no-uint8"

" --comma-operators --no-argc --no-bitfields --no-arrays --pointers --no-structs --no-unions --no-packed-struct --no-divs --no-muls --no-pre-incr-operator --no-pre-decr-operator --no-post-incr-operator --no-post-decr-operator --no-unary-plus-operator --no-longlong --no-float --jumps --no-volatiles --compound-assignment --consts --no-inline-function --no-volatile-pointers --const-pointers     --builtins --no-int8 --no-uint8"

" --comma-operators --no-argc --no-bitfields --no-arrays --no-pointers --no-structs --no-unions --no-packed-struct --no-divs --no-muls --no-pre-incr-operator --no-pre-decr-operator --post-incr-operator --no-post-decr-operator --no-unary-plus-operator --no-longlong --no-float --no-jumps --no-volatiles --compound-assignment --no-consts --no-inline-function --no-volatile-pointers --no-const-pointers     --no-builtins --no-int8 --no-uint8"
)

kc=-1
n=${#ary_centroids_k10[@]}

function remove_temp {
    rm -rf *.c *.out *.txt *.info 2> /dev/null
}

function dump_tc {
    src=$1
    dst=save_tc/$1
    cp -- $src $dst
}

function compile_tc {
    tc=$1
    vn=$2

    for ol in {0..3}; do
        out=$tc-$vn-$ol.out
        timeout $tout /project/alipour/rabin/bin/gcc710-bin/bin/gcc -O$ol -I /project/alipour/rabin/bin/csmith230-bin/include/csmith-2.3.0 -w $tc -msse4.2 -o $out 2> cb.txt
        if [ `cat cb.txt|wc -w` -ne 0 ]; then
            m_cb=$((m_cb+1));
            echo "Crash Bug #$m_cb [GCC$vn-O$ol]:";
            cat cb.txt;
            echo;echo;
            dump_tc $tc;
        fi
    done
}

function experiment_tc {
    v="7.1.0"
    compile_tc $1 $v
}

function exec_csmith {
    kc=$((((kc+1))%n))
    args=${ary_centroids_k10[$kc]}
    TCNAME=$(date +%Y%m%d%H%M%S%N).c
    /project/alipour/rabin/scripts/csmith.sh $args > $TCNAME
    if [ $? -ne 0 ]; then m_cs=$((m_cs+1)); return 1; fi
    m_tc=$((m_tc+1))
    experiment_tc $TCNAME
}

function run_tc_timer {
    START=$(date +%s)
    limit=1*60*60*12
    while [ $(($(date +%s) - limit)) -lt $START ]; do
        exec_csmith
        remove_temp
    done
}

function run_tc_one {
    exec_csmith
}

cd /project/alipour/rabin/check/cb/
mkdir save_tc
#run_tc_one
run_tc_timer
echo; echo m_cs=$m_cs m_tc=$m_tc m_cb=$m_cb; echo
