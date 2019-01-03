#!/bin/bash                                                                                                                                                                                                 
#PBS -t 1-1000
#PBS -N csmith

tout=10

function compile {
    tc=$1
    version=$2
    outname=$tc-0-$version.out
    echo $outname;
    timeout $tout gcc -I /home/mrabin/bin/CSmith230/include/csmith-2.3.0 -w $tc -o $outname
    for i in {1..3}
    do
        outname=$tc-$i-$version.out
        echo $outname;
        timeout $tout gcc -I /home/mrabin/bin/CSmith230/include/csmith-2.3.0 -w -O$i $tc -o $outname
    done
}



function experiment  {
    echo; echo "Compile:";

    module load gcc gcc/4.8.2
    compile $1 4.8.2

    module switch gcc gcc/4.9.2
    compile $1 4.9.2

    module switch gcc gcc/5.2.0
    compile $1 5.2.0

    module switch gcc gcc/5.4.0
    compile $1 5.4.0

    echo; echo "Output:";
    for i in `ls $1-*.out`
    do
	timeout $tout ./$i > $i.txt
	echo $? : $i;
	cat $i.txt >> $1.txt
    done

    echo; echo "Diff:"
    for i in `ls $1-0-*.out.txt`
    do
	    c=$(cat $i | wc -w)
        if [ $c -le 1 ]; then 
            echo 0 = $i
            break 
        fi
        for j in `ls $1-*.out.txt`
        do
            c=$(cat $j | wc -w)
            if [ $c -le 1 ]; then
                echo 0 = $j
                break
            fi
            if [ "$i" != "$j" ]; then
                diff $i $j &>/dev/null
                if [ $? -ne 0 ]; then
		            echo $i : $j
                    echo $i : $j >> bugs.txt
                fi
            fi
        done
    done
}

function main {
    NUM=$PBS_ARRAYID
    TCNAME=tc$NUM.c
    echo $TCNAME
    /home/mrabin/scripts/csmith.sh > $TCNAME
    experiment $TCNAME
    echo
}

#PBS_ARRAYID=1
cd /home/mrabin/main/f1
main


