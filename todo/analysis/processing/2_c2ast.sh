#!/bin/bash
inpPath="../../data/regression/c"
outPath="../../data/regression/ast"

# set-params
itr=0; err=0; noc=0

# method
function c2ast {
    for file in `ls "$inpPath" | grep "\.c$"`
    do
        (( itr++ ))
        clang -w -Xclang -ast-dump -fsyntax-only "$outPath/$file" &> "$outPath/$file.ast"
        exval=$?
        echo "$itr : $exval : $file"
        if [ $exval -gt 0 ]; then
            (( err++ ))
            mv "$outPath/$file" "$outPath/err/"
            mv "$outPath/$file.ast" "$outPath/err/"
        else
            if ! grep -Fq ".c:" "$outPath/$file.ast"; then
                (( noc++ ))
                mv "$outPath/$file" "$outPath/noc/"
                mv "$outPath/$file.ast" "$outPath/noc/"
            fi
        fi
    done
}

function init {
    find "$outPath" -name "*.ast" -delete
    rm -rf "$outPath/err/"
    rm -rf "$outPath/noc/"

    mkdir "$outPath/err/"
    mkdir "$outPath/noc/"
}

# func-call
init
c2ast
echo "Summary = $itr - $err - $noc"
