#!/bin/bash
file="allcfiles.txt"
while IFS= read -r line
do
    clang -Xclang -ast-dump -fsyntax-only "c_files/$line" &> "ast_files/$line.ast"
done < "$file"
