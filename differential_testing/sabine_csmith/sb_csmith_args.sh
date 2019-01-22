#!/bin/bash
#SBATCH -J sb_csmith
#SBATCH -o sb_csmith.o%j
#SBATCH -t 06:00:01

# Note:
# run1: gcc 4.8.2 with -O3

tout1=5
tout2=10

m_cs=0 # CSmith
m_tc=0 # TestCase
m_cb=0 # CrashBug
m_to=0 # TimeOut
m_wc=0 # WrongCode

ary_centroids_k3=(
" --default"

" --comma-operators --no-argc --no-bitfields --no-arrays --no-pointers --no-structs --no-unions --no-packed-struct --no-divs --no-muls --no-pre-incr-operator --no-pre-decr-operator --no-post-incr-operator --no-post-decr-operator --no-unary-plus-operator --no-longlong --no-float --jumps --no-volatiles --compound-assignment --no-consts --no-inline-function --no-volatile-pointers --no-const-pointers     --no-builtins --no-int8 --no-uint8"

" --comma-operators --no-argc --no-bitfields --no-arrays --pointers --no-structs --no-unions --no-packed-struct --no-divs --no-muls --no-pre-incr-operator --no-pre-decr-operator --no-post-incr-operator --no-post-decr-operator --no-unary-plus-operator --no-longlong --no-float --no-jumps --no-volatiles --compound-assignment --no-consts --no-inline-function --no-volatile-pointers --no-const-pointers     --no-builtins --no-int8 --no-uint8"

" --no-comma-operators --no-argc --no-bitfields --no-arrays --no-pointers --no-structs --no-unions --no-packed-struct --no-divs --no-muls --no-pre-incr-operator --no-pre-decr-operator --no-post-incr-operator --no-post-decr-operator --no-unary-plus-operator --no-longlong --no-float --jumps --no-volatiles --no-compound-assignment --no-consts --no-inline-function --no-volatile-pointers --no-const-pointers --no-global-variables --no-builtins --no-int8 --no-uint8"
)

ary_centroids_k10=(
" --default"

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

kc=${ary_centroids_k10[9]} #TODO

function compile_tc {
    tc=$1
    vn=$2
    ol=$3

    out=$tc-$vn-$ol.out
    timeout $tout1 /project/alipour/rabin/bin/gcc482-bin/bin/gcc -O$ol -I /project/alipour/rabin/bin/csmith230-bin/include/csmith-2.3.0 -w $tc -o $out 2> /dev/null
    if [ $? -ne 0 ]; then
        timeout $tout2 /project/alipour/rabin/bin/gcc482-bin/bin/gcc -O$ol -I /project/alipour/rabin/bin/csmith230-bin/include/csmith-2.3.0 -w $tc -o $out 2> /dev/null
            if [ $? -ne 0 ]; then m_cb=$((m_cb+1)); echo > $out; echo $out > CrashBug.txt; return 1;  fi
    fi
}

function dump_output {
    for i in `ls $1-$2-$3.out`; do
        timeout $tout1 ./$i > $i.txt 2> /dev/null
        if [ $? -ne 0 ]; then
            timeout $tout2 ./$i > $i.txt 2> /dev/null
            if [ $? -ne 0 ]; then m_to=$((m_to+1)); echo > $i.txt; echo $i > TimeOut.txt; return 1; fi
        fi
    done
}

function experiment_tc {
    v="4.8.2"
    o="3"
    compile_tc $1 $v $o
    dump_output $1 $v $o
}

function exec_csmith {
    TCNAME=$(date +%Y%m%d%H%M%S%N).c
    /project/alipour/rabin/scripts/csmith.sh $kc > $TCNAME
    if [ $? -ne 0 ]; then m_cs=$((m_cs+1)); return 1; fi
    m_tc=$((m_tc+1))
    experiment_tc $TCNAME
}

function run_tc_timer {
    START=$(date +%s)
    limit=1*60*60*6
    while [ $(($(date +%s) - limit)) -lt $START ]; do
        exec_csmith
    done
}

function run_tc_one {
    exec_csmith
}

cd /project/alipour/rabin/main/run
run_tc_timer #run_tc_one
echo; echo m_cs=$m_cs m_tc=$m_tc m_cb=$m_cb m_to=$m_to m_wc=$m_wc; echo
