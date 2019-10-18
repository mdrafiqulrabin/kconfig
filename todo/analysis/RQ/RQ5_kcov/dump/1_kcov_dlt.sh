#!/bin/bash
#SBATCH -J kcov_dlt
#SBATCH -o kcov_dlt_%j.txt
#SBATCH -t 24:01:01

vnd="$1" #4.8.2

function delete_gcov(){
    rm -rf *.gcda
    rm -rf *.gcov
}

function main(){
    cd /project/alipour/rabin/bin/gcc-$vnd/build/gcc/
    delete_gcov
    echo "Done: delete_gcov"
}

main
