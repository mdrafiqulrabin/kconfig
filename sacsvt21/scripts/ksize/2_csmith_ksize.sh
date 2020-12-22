#!/bin/bash
#SBATCH -J csmith_ksize
#SBATCH -o csmith_ksize_%j.txt
#SBATCH -t 13:01:01

# set-params
m_tc=0
m_centroids=142 #xmeans_ksize
m_path_csmith="/project/alipour/rabin/kconfig/data/ksize/csmith_n"
m_run=""

# method
function exec_csmith {
    module load python/3.7
    m_tc=0
    while [ $m_tc -lt $m_total ]
    do
        m_tc=$((m_tc+1))
        args=`python /project/alipour/rabin/kconfig/scripts/ksize/ksize_csmith_args.py $m_tc`
        /project/alipour/rabin/scripts/csmith.sh $args > $m_path_csmith/$m_run/$m_tc.c
    done
}

function init {
    mkdir -p $m_path_csmith/$m_run
}

# get-params
m_run=r"$1" #1~3

# func-call
init
exec_csmith
