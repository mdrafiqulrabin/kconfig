#!/bin/bash
#SBATCH -J ngram
#SBATCH -o ngram_%j.txt
#SBATCH -t 24:01:01

n="$1"
slp2="/project/alipour/rabin/kconfig/ngram/SLP-Core_v0.2.jar"

train_path=(
"/project/alipour/rabin/kconfig/data/csmith_n/kconfig/r1/"
)

test_path=(
"/project/alipour/rabin/kconfig/data/regression/c/"
"/project/alipour/rabin/kconfig/data/csmith_n/default/r1/"
"/project/alipour/rabin/kconfig/data/csmith_n/kconfig/r1/"
"/project/alipour/rabin/kconfig/data/csmith_n/swarm/r1/"
)

module load Java/1.8.0_144

echo "[$n]"
for i in "${train_path[@]}"; do
	for j in "${test_path[@]}"; do
		echo ""; echo "[$i - $j]:"
		java -jar $slp2 train-test --train $i --test $j -m jm -o $n -l java -e c --cache
	done
done

