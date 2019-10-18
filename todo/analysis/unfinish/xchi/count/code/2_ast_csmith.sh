#!/bin/bash

thePath="$1"

# set-params
itr=0; err=0; noc=0

# method
function c2ast {
    for file in `find $thePath -type f -name '*.c'`
    do
        (( itr++ ))
        clang -w -I /Users/mdrafiqulrabin/bin/csmith230-bin/include/csmith-2.3.0 -Xclang -ast-dump -fsyntax-only "$file" &> "$file.ast"
        exval=$?
        echo "$itr : $exval : $file"
        if [ $exval -gt 0 ]; then
            (( err++ ))
            echo "$file" >> $thePath/err.txt
        else
            if ! grep -Fq ".c:" "$file.ast"; then
                (( noc++ ))
                echo "$file" >> $thePath/noc.txt
            fi
        fi
    done
}

function init {
    find "$thePath" -type f -name "*.ast" -delete
    find "$thePath" -type f -name "*.txt" -delete
}

# func-call
init
c2ast
echo "Summary = $itr - $err - $noc"
