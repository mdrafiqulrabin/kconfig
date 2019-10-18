#!/bin/bash
#SBATCH -J kcov
#SBATCH -o kcov_%j.txt
#SBATCH -t 24:01:01

vn="$1" #482
st="$2" #regression
rn="r$3" #r1~r3

cnt=0

ts="/project/alipour/rabin/kconfig/data/csmith_n/$st/$rn/"

function exec_ts(){
    for tc in `ls $ts/*.c`
    do
        cnt=$((cnt+1))
        timeout 10 ./gcc -O3 -I /project/alipour/rabin/bin/csmith230-bin/include/csmith-2.3.0 -w -msse4.2 "$tc" 2>/dev/null
        echo "$cnt: $tc"
    done
}

function main(){
    cd /project/alipour/rabin/bin/gcc$vn-bin/bin
    exec_ts
    echo "Done: exec_ts"
}

main
