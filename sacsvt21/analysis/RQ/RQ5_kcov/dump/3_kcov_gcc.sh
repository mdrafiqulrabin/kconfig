#!/bin/bash
#SBATCH -J kcov
#SBATCH -o kcov_%j.txt
#SBATCH -t 24:01:01

vnd="$1" #4.8.2
st="$2" #default
cnt=0

m_output="/project/alipour/rabin/kconfig/analysis/kcov/info/raw"

function run_gcov_s(){
    for f in `ls *.gcda`
    do
        gcov $f >> "$m_output"/"$vnd"_"$st"_statement.txt
    done
}

function run_gcov_b(){
    for f in `ls *.gcda`
    do
        gcov -b $f >> "$m_output"/"$vnd"_"$st"_branch.txt
    done
}

function run_gcov_f(){
    for f in `ls *.gcda`
    do
        gcov -f $f >> "$m_output"/"$vnd"_"$st"_function.txt
    done
}

function run_gcov(){
    run_gcov_s
    run_gcov_b
    run_gcov_f
}

function init {
    mkdir -p "$m_output"/"$vnd"
}

function main(){
    cd /project/alipour/rabin/bin/gcc-$vnd/build/gcc/
    run_gcov
    echo "Done: run_gcov"
}

init
main
