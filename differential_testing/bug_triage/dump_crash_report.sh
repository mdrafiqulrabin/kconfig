#!/bin/bash
#SBATCH -J crash_report_gcc482_swarm
#SBATCH -o crash_report_gcc482_swarm.txt
#SBATCH -t 13:01:01
#SBATCH -p alipour

# Comments

#scp -r /Users/mdrafiqulrabin/Desktop/Doctoral-Research/differential_testing/bug_triage/* mrabin@sabine.cacds.uh.edu:/project/alipour/rabin/bug_triage/

#/project/alipour/rabin/bin/gcc$mvr-bin/bin/gcc -O$ol -I /project/alipour/rabin/bin/csmith230-bin/include/csmith-2.3.0 -w -msse4.2 $tc -o $tc.out 2> $tc-$ol.txt

#find . -name ".DS_Store" -delete

function call_gcc {
    ol=$1
    vr=$2
    for tc in `ls *.c`; do
        echo $tc
        /project/alipour/rabin/bin/gcc$vr-bin/bin/gcc -O$ol -I /project/alipour/rabin/bin/csmith230-bin/include/csmith-2.3.0 -w -msse4.2 $tc -o $tc.out 2> $tc-$ol.txt
    done
}

function save_crash_report {
    mnext=$1 #swarm or pk16 or etc
    vr=$2 #version=482 or version=540
    cd $mnext
    for f in `ls -d */`; do
        cd $f
        echo $f
        if   [ "$f" = "cb1/" ]; then call_gcc "0" $vr
        elif [ "$f" = "cb2/" ]; then call_gcc "1" $vr
        elif [ "$f" = "cb3/" ]; then call_gcc "0" $vr; call_gcc "1" $vr; fi
        cd ..
    done
}

# Main
cd /project/alipour/rabin/bug_triage/
vr="482"
for f in `ls -d */`; do
    echo $f
    save_crash_report $f $vr
    cd ..
done
