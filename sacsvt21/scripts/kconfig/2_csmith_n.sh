#!/bin/bash
#SBATCH -J csmith_n
#SBATCH -o csmith_n.txt
#SBATCH -t 13:01:01

# set-params
m_tc=0
m_total=10000
m_centroids=134 #by xmeans_centroids.py
m_data_csmith="/project/alipour/rabin/kconfig/data/csmith_n"
m_run=""

# method
function exec_csmith {
    module load python/3.7
    m_tc=0
    while [ $m_tc -lt $m_total ]
    do
        m_tc=$((m_tc+1))

        /project/alipour/rabin/scripts/csmith.sh > $m_data_csmith/default/$m_run/$m_tc.c

        args=`python /project/alipour/rabin/kconfig/scripts/kconfig/swarm_csmith_args.py`
        /project/alipour/rabin/scripts/csmith.sh $args > $m_data_csmith/swarm/$m_run/$m_tc.c

        c=$((m_tc % m_centroids - 1))
        args=`python /project/alipour/rabin/kconfig/scripts/kconfig/kconfig_csmith_args.py $c`
        /project/alipour/rabin/scripts/csmith.sh $args > $m_data_csmith/kconfig/$m_run/$m_tc.c
    done
}

function init {
    mkdir -p $m_data_csmith/default/$m_run $m_data_csmith/swarm/$m_run $m_data_csmith/kconfig/$m_run
}

# get-params
m_run=r"$1" #1~3

# func-call
init
exec_csmith
