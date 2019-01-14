File Edit Options Buffers Tools Sh-Script Help                                                                                                                                                              
#!/bin/bash                                                                                                                                                                                                 
#PBS -t 1-500                                                                                                                                                                                               
#PBS -N cfuzzer                                                                                                                                                                                             






function compile {
    tc=$1
    version=$2
    echo $tc
    for i in {1..3}
    do
        outname=$tc-$i-$version
        echo $outname
        timeout 10 gcc -I ~/tools/csmith/include/csmith-2.3.0 -w -O$i $tc -o $outname

    done
}



function experiment  {
    tc=$1
    module load gcc gcc/4.8.2
    compile $1 4.8.2

    module switch gcc gcc/4.9.2
    compile $1 4.9.2

    module switch gcc gcc/5.2.0
    compile $1 5.2.0

    module switch gcc gcc/5.4.0
    compile $1 5.2.0

    OUT=$tc.txt
    rm -f OUT
    for i in `ls $tc-*`
    do
        echo $i, `$i`>>  $OUT
    done

}


#filename=tmp/xaa                                                                                                                                                                                           
#PBS_ARRAYID=1
echo $filename

NUM=$PBS_ARRAYID
TCNAME=tc$NUM.c
csmith > $TCNAME
experiment $TCNAME
#l=`tail -n+$NUM $filename | head -n1`
#echo $l
#experiment $l
