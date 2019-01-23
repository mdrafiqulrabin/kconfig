#!/bin/bash
#PBS -N csmith

tout1=5
tout2=10

m_cs=0 # CSmith
m_tc=0 # TestCase
m_cb=0 # CrashBug
m_to=0 # TimeOut
m_ct=0 # CrashBug or TimeOut
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
    vn=$2

    #ground-truth
    out=$tc-$vn.out
    timeout $tout1 gcc -I /home/mrabin/bin/CSmith230/include/csmith-2.3.0 -w $tc -o $out 2> /dev/null
    if [ $? -ne 0 ]; then
        timeout $tout2 gcc -I /home/mrabin/bin/CSmith230/include/csmith-2.3.0 -w $tc -o $out 2> /dev/null
        if [ $? -ne 0 ]; then m_cb=$((m_cb+1)); echo > $out; return 1; fi
    fi
    timeout $tout1 ./$out > $out.txt 2> /dev/null
    if [ $? -ne 0 ]; then
        timeout $tout2 ./$out > $out.txt 2> /dev/null
        if [ $? -ne 0 ]; then m_to=$((m_to+1)); echo > $out.txt; return 1; fi
    fi

    #optimization-level
    for ol in {1..3}; do
        out=$tc-$vn-$ol.out
        timeout $tout1 gcc -O$ol -I /home/mrabin/bin/CSmith230/include/csmith-2.3.0 -w $tc -o $out 2> /dev/null
        if [ $? -ne 0 ]; then
            timeout $tout2 gcc -O$ol -I /home/mrabin/bin/CSmith230/include/csmith-2.3.0 -w $tc -o $out 2> /dev/null
            if [ $? -ne 0 ]; then echo > $out; fi
        fi
        timeout $tout1 ./$out > $out.txt 2> /dev/null
        if [ $? -ne 0 ]; then
            timeout $tout2 ./$out > $out.txt 2> /dev/null
            if [ $? -ne 0 ]; then echo > $out.txt; fi
        fi
    done

    #dump_diff
    dump_diff $1 $2
}

function dump_diff {
    for i in `ls $1-$2.out.txt`; do
	    c=$(cat $i | wc -w) #Output is 'checksum = ???', so break if [$c -ne 3]
        if [ $c -ne 3 ]; then echo "$i -> `cat $i`"; m_ct=$((m_ct+1)); break; fi
        for j in `ls $1-$2-*.out.txt`; do
            if [ "$i" != "$j" ]; then
                diff $i $j &> /dev/null
                if [ $? -ne 0 ]; then
                    k="$i -> `cat $i` : $j -> `cat $j`"
                    echo $k; echo $k >> data_tc/WrongCode.txt
                    m_wc=$((m_wc+1));
                    save_tc $1
                fi
            fi
        done
    done
}

function experiment_tc {
    #gcc_vn=(4.8.2 4.9.2 5.2.0 5.4.0)
    gcc_vn=(4.8.2)
    module load gcc gcc/"${gcc_vn[0]}"
    for v in "${gcc_vn[@]}"; do
        module switch gcc gcc/$v
        compile_tc $1 $v
    done
}

function exec_csmith {
    TCNAME=$(date +%Y%m%d%H%M%S%N).c
    /home/mrabin/scripts/csmith.sh $kc > $TCNAME
    if [ $? -ne 0 ]; then m_cs=$((m_cs+1)); return 1; fi
    m_tc=$((m_tc+1))
    #echo; echo "[$TCNAME]:"
    experiment_tc $TCNAME
}

function run_tc_timer {
    START=$(date +%s)
    limit=1*60*60*2
    while [ $(($(date +%s) - limit)) -lt $START ]; do
        exec_csmith
        remove_temp
    done
}

function run_tc_one {
    exec_csmith
}

cd /home/mrabin/main/run/v482/r2
mkdir data_tc
touch data_tc/WrongCode.txt
run_tc_timer #run_tc_one
echo; echo m_cs=$m_cs m_tc=$m_tc m_cb=$m_cb m_to=$m_to m_ct=$m_ct m_wc=$m_wc; echo
