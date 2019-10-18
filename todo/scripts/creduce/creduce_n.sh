#!/bin/bash
#SBATCH -J creduce_n
#SBATCH -o creduce_n_%j.txt
#SBATCH -n 8 -N 1
#SBATCH -t 24:01:01

# set-params
m_path_input=""
m_path_output=""
m_path_csmith="/project/alipour/rabin/kconfig/data/csmith_n"
m_path_gcc="/project/alipour/rabin/kconfig/data/gcc_n"
m_path_creduce="/project/alipour/rabin/kconfig/data/creduce/creduce_n"
m_path_sh="/project/alipour/rabin/kconfig/scripts/creduce"
m_args=""
m_version=""
m_run=""
m_type=""
tout=1800

# method
function remove_temp {
    rm -rf *.out *.chk *.c.orig 2> /dev/null
}

function exec_creduce {
    vn="$m_version"
    IFS=$'\n'
    for tc in `cat $m_path_file`
    do
        if [ "$m_type" == "mc" ]; then
            tc=`echo $tc | cut -d "-" -f 1`
            tc=${tc##*/}
        fi
        cp $m_path_input/$tc $m_path_output/$tc
        tc="$m_path_output/$tc"
        if [ "$m_type" != "mc" ]; then
            /project/alipour/rabin/bin/gcc$vn-bin/bin/gcc -I /project/alipour/rabin/bin/csmith230-bin/include/csmith-2.3.0 -w -msse4.2 $tc &> "$tc-$vn-0.err"
            /project/alipour/rabin/bin/gcc$vn-bin/bin/gcc -O3 -I /project/alipour/rabin/bin/csmith230-bin/include/csmith-2.3.0 -w -msse4.2 $tc &> "$tc-$vn-3.err"
        fi
        export env_var_tc="$tc"
        export env_var_vn="$vn"
        creduce $m_path_sh $tc --timeout $tout
        remove_temp
    done
}

function init {
    m_path_file="$m_path_gcc/$m_version/$m_args/$m_run/$m_type.txt"
    m_path_sh="$m_path_sh/creduce-$m_type.sh"
    m_path_input="$m_path_csmith/$m_args/$m_run"
    m_path_output="$m_path_creduce/$m_version/$m_args/$m_run/$m_type"
    mkdir -p "$m_path_output"  2> /dev/null
}

function main {
    module load creduce/2.9.0
    init
    exec_creduce
}

# get-params
m_version="$1" #482~trunk
m_args="$2" #default/swarm/kconfig
m_run="r$3" #1~3
m_type="$4" #cb0~3/mc/

# func-call
main
