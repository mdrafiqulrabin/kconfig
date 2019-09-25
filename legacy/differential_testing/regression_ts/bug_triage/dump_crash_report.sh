#!/bin/bash
#SBATCH -J crash_report
#SBATCH -o crash_report.txt
#SBATCH -t 13:01:01
#SBATCH -p alipour

# Comments

#scp -r /Users/mdrafiqulrabin/Desktop/Doctoral-Research/differential_testing/bug_triage/* mrabin@sabine.cacds.uh.edu:/project/alipour/rabin/bug_triage/crash_report/

#/project/alipour/rabin/bin/gcc$mvr-bin/bin/gcc -O$ol -I /project/alipour/rabin/bin/csmith230-bin/include/csmith-2.3.0 -w -msse4.2 $tc -o $tc.out 2> $tc-$ol.txt

#find . -name ".DS_Store" -delete
#squeue | grep mrabin
#scancel <job-id>
#chk=("save_st" "to1" "to2" "to3" "wc"); for i in ${chk[@]}; do x=`find . -name "$i"`; for j in $x; do rm -rf $j; done; done
#find . -name "*.txt" -delete

function save_crash_report_l2 {
    ol=$1
    vr=$2
    for tc in `ls *.c`; do
        echo $tc
        /project/alipour/rabin/bin/gcc$vr-bin/bin/gcc -O$ol -I /project/alipour/rabin/bin/csmith230-bin/include/csmith-2.3.0 -w -msse4.2 $tc 2> "$tc-$vr-$ol.txt"
    done
}

function save_crash_report_l1 {
    mcurr=$1
    vr=$2
    if   [[ $mcurr == *"cb1"* ]]; then save_crash_report_l2 "0" $vr
    elif [[ $mcurr == *"cb2"* ]]; then save_crash_report_l2 "3" $vr
    elif [[ $mcurr == *"cb3"* ]]; then
        save_crash_report_l2 "0" $vr;
        save_crash_report_l2 "3" $vr;
    fi
}

# Main
mpath="/project/alipour/rabin/bug_triage/crash_report/"
cd $mpath
spath=`find . -name "cb*"`
for sp in $spath; do
    mnext="$mpath$sp"
    echo; echo "$mnext:"
    cd $mnext
    if   [[ $mnext == *"gcc482"* ]]; then
    echo; echo "gcc482:"
    save_crash_report_l1 $mnext "482"
    elif [[ $mnext == *"gcc540"* ]]; then
    echo; echo "gcc540:"
    save_crash_report_l1 $mnext "540"
    fi
done
find . -name "*.out" -delete
