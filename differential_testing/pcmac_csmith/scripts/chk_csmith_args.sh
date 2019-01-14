#!/bin/sh

# 2> /dev/null for ignoring the error message
# $? to check the cmd succeed status
# return 1 to discard the current tc.c

k3_1=" --comma-operators --no-argc --no-bitfields --no-arrays --no-pointers --no-structs --no-unions --no-packed-struct --no-divs --no-muls --no-pre-incr-operator --no-pre-decr-operator --no-post-incr-operator --no-post-decr-operator --no-unary-plus-operator --no-longlong --no-float --jumps --no-volatiles --compound-assignment --no-consts --no-inline-function --no-volatile-pointers --no-const-pointers     --no-builtins --no-int8 --no-uint8"

k3_2=" --comma-operators --no-argc --no-bitfields --no-arrays --pointers --no-structs --no-unions --no-packed-struct --no-divs --no-muls --no-pre-incr-operator --no-pre-decr-operator --no-post-incr-operator --no-post-decr-operator --no-unary-plus-operator --no-longlong --no-float --no-jumps --no-volatiles --compound-assignment --no-consts --no-inline-function --no-volatile-pointers --no-const-pointers     --no-builtins --no-int8 --no-uint8"

k3_3=" --no-comma-operators --no-argc --no-bitfields --no-arrays --no-pointers --no-structs --no-unions --no-packed-struct --no-divs --no-muls --no-pre-incr-operator --no-pre-decr-operator --no-post-incr-operator --no-post-decr-operator --no-unary-plus-operator --no-longlong --no-float --jumps --no-volatiles --no-compound-assignment --no-consts --no-inline-function --no-volatile-pointers --no-const-pointers --no-global-variables --no-builtins --no-int8 --no-uint8"

k3=$k3_3

csmith.sh $k3 > tc.c 2> /dev/null

if [ $? -ne 0 ]
then
    echo "Error on creating tc with CSmith!"
fi
