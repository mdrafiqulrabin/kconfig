#!/bin/bash
#SBATCH -J optimization_report
#SBATCH -o optimization_report.txt
#SBATCH -t 13:01:01
#SBATCH -p alipour

# Comments

#scp -r /Users/mdrafiqulrabin/Desktop/Doctoral-Research/differential_testing/bug_triage/* mrabin@sabine.cacds.uh.edu:/project/alipour/rabin/bug_triage/optimization_report/

#/project/alipour/rabin/bin/gcc$mvr-bin/bin/gcc -O$ol -I /project/alipour/rabin/bin/csmith230-bin/include/csmith-2.3.0 -w -msse4.2 $tc -o $tc.out 2> $tc-$ol.txt

#find . -name ".DS_Store" -delete
#x=`find . -name “*.txt”`; for i in $x; do rm -rf $i; done
#squeue | grep mrabin
#scancel <job-id>
#find . -name "*.txt" -delete

function save_optimization_report {
    ol=$1
    vr=$2
    for tc in `ls *.c`; do
        echo $tc
        my_gcc="/project/alipour/rabin/bin/gcc$vr-bin/bin/gcc -O$ol -I /project/alipour/rabin/bin/csmith230-bin/include/csmith-2.3.0 -w -msse4.2"
        $my_gcc $tc -fopt-info 2> "$tc-$vr-$ol-info.txt"
        $my_gcc $tc -fopt-info-optimized 2> "$tc-$vr-$ol-info-optimized.txt"
        $my_gcc $tc -fopt-info-missed 2> "$tc-$vr-$ol-info-missed.txt"
        $my_gcc $tc -fopt-info-note 2> "$tc-$vr-$ol-info-note.txt"
        $my_gcc $tc -fopt-info-all 2> "$tc-$vr-$ol-info-all.txt"
    done
}

# Main
mpath="/project/alipour/rabin/bug_triage/optimization_report/"
cd $mpath
spath=`find . -name "wc"`
for sp in $spath; do
    mnext="$mpath$sp"
    echo; echo "$mnext:"
    cd $mnext
    if   [[ $mnext == *"gcc482"* ]]; then
        #echo; echo "gcc482-0:"
        #save_optimization_report "0" "482"
        echo; echo "gcc482-3:"
        save_optimization_report "3" "482"
    elif [[ $mnext == *"gcc540"* ]]; then
        #echo; echo "gcc540-0:"
        #save_optimization_report "0" "540"
        echo; echo "gcc540-3:"
        save_optimization_report "3" "540"
    fi
done
