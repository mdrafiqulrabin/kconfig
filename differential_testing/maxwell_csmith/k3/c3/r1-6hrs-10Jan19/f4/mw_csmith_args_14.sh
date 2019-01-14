#!/bin/bash
#PBS -N csmith

# Note:
# output is 'checksum = ???', so $c -ne 3

tout1=5
tout2=10

m_cs=0 # CSmith
m_tc=0 # TestCase
m_ot=0 # CrashBug or TimeOut
m_mc=0 # MissCompilation

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

kc=${ary_centroids_k3[3]} #TODO

function remove_temp {
    rm -rf *.c *.out *.txt *.info 2> /dev/null
}

function save_tc {
    src=$1
    dist="data_tc/$1"
    cp -- $src $dist
}

function compile_tc {
    tc=$1
    ver=$2
    out=$tc-$ver-0.out
    timeout $tout1 gcc -I /home/mrabin/bin/CSmith230/include/csmith-2.3.0 -w $tc -o $out 2> /dev/null
    if [ $? -ne 0 ]; then
        timeout $tout2 gcc -I /home/mrabin/bin/CSmith230/include/csmith-2.3.0 -w $tc -o $out 2> /dev/null
        if [ $? -ne 0 ]; then echo > $out; fi
    fi
    for i in {1..3}; do
        out=$tc-$ver-$i.out
        timeout $tout1 gcc -I /home/mrabin/bin/CSmith230/include/csmith-2.3.0 -w $tc -o $out 2> /dev/null
        if [ $? -ne 0 ]; then
            timeout $tout2 gcc -I /home/mrabin/bin/CSmith230/include/csmith-2.3.0 -w $tc -o $out 2> /dev/null
            if [ $? -ne 0 ]; then echo > $out; fi
        fi
    done
}

function dump_output {
    for i in `ls $1-$2-*.out`; do
        timeout $tout1 ./$i > $i.txt 2> /dev/null
        if [ $? -ne 0 ]; then
            timeout $tout2 ./$i > $i.txt 2> /dev/null
            if [ $? -ne 0 ]; then echo > $i.txt; fi
        fi
#echo "[$?]: $i -> `cat $i.txt`"
    done
}

function dump_diff {
    for i in `ls $1-$2-0.out.txt`; do
	    c=$(cat $i | wc -w)
        if [ $c -ne 3 ]; then echo "$i -> `cat $i`"; m_ot=$((m_ot+1)); break; fi
        for j in `ls $1-$2-*.out.txt`; do
            if [ "$i" != "$j" ]; then
                diff $i $j &> /dev/null
                if [ $? -ne 0 ]; then
                    k="$i -> `cat $i` : $j -> `cat $j`"
                    echo $k; echo $k >> data_tc/bugs.txt
                    m_mc=$((m_mc+1));
                    save_tc $1
                fi
            fi
        done
    done
}

function experiment_tc {
    gcc_ver=(4.8.2 4.9.2 5.2.0 5.4.0)
    module load gcc gcc/"${gcc_ver[0]}"
    for i in "${gcc_ver[@]}"; do
        v="$i"
        module switch gcc gcc/$v
        compile_tc $1 $v
#echo; echo "dump_output:"
        dump_output $1 $v
        echo; echo "dump_diff:"
        dump_diff $1 $v
    done
}

function exec_csmith {
    TCNAME=$(date +%Y%m%d%H%M%S%N).c
    /home/mrabin/scripts/csmith.sh $kc > $TCNAME
    if [ $? -ne 0 ]; then m_cs=$((m_cs+1)); return 1; fi
    m_tc=$((m_tc+1))
    echo; echo "[$TCNAME]:"
    experiment_tc $TCNAME
}

function run_tc_timer {
    START=$(date +%s)
    limit=1*60*60
    while [ $(($(date +%s) - limit)) -lt $START ]; do
        exec_csmith
        remove_temp
    done
}

cd /home/mrabin/main/r1/f4
mkdir data_tc
touch data_tc/bugs.txt
run_tc_timer
echo; echo m_cs=$m_cs m_tc=$m_tc m_ot=$m_ot m_mc=$m_mc; echo
