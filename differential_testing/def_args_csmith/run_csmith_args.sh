#!/bin/sh

# 2> /dev/null for ignoring the error message
# $? to check the cmd succeed status
# return 1 to discard the current tc.c

m_timeout=10

m_cs=0 # CSmith
m_tc=0 # TestCase
m_cb=0 # CrashBug
m_to=0 # TimeOut
m_mc=0 # MissCompilation

ary_centroids=(
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

kc=${ary_centroids[0]} #TODO

function remove_temp_files() {
    rm -rf *.c *.o *.txt *.info 2> /dev/null
}

function save_tc() {
    src="tc.c"
    dist="save_tc/$1_$(gdate +%Y%m%d%H%M%S%N).c"
    cp -- $src $dist
}

function exec_csmith_args() {
    # create csmith test case with ~/bin/csmith230-bin/bin/csmith
    csmith.sh $kc > tc.c 2> /dev/null
    if [ $? -ne 0 ]
        then
            m_cs=$((m_cs+1))
            return 1
    fi

    # count number of test case
    m_tc=$((m_tc+1))

    # run with default /usr/include/c++/4.2.1
    gcc -w -O3 tc.c -o out421.o -I ~/bin/csmith230-bin/include/csmith-2.3.0 2> /dev/null
    if [ $? -ne 0 ]
        then
            m_cb=$((m_cb+1))
            save_tc "cb"
            return 1
    fi
    gtimeout $m_timeout ./out421.o > out421.txt
    if [ $? -ne 0 ]
        then
            m_to=$((m_to+1))
            save_tc "to"
            return 1
    fi

    # run with ~/bin/gcc480-bin/bin
    ~/bin/gcc480-bin/bin/gcc -w -O3 tc.c -o out480.o -I ~/bin/csmith230-bin/include/csmith-2.3.0 2> /dev/null
    if [ $? -ne 0 ]
        then
            m_cb=$((m_cb+1))
            save_tc "cb"
            return 1
    fi
    gtimeout $m_timeout ./out480.o > out480.txt
    if [ $? -ne 0 ]
        then
            m_to=$((m_to+1))
            save_tc "to"
            return 1
    fi

    # compare output with diff
    diff out421.txt out480.txt
    if [ $? -ne 0 ]
        then
            m_mc=$((m_mc+1))
            save_tc "mc"
            return 1
    fi
}

remove_temp_files
START=$(date +%s)
limit=1*60*60*6
while [ $(($(date +%s) - limit)) -lt $START ]; do
    exec_csmith_args
    echo m_cs=$m_cs m_tc=$m_tc m_cb=$m_cb m_to=$m_to m_mc=$m_mc
    remove_temp_files
done
