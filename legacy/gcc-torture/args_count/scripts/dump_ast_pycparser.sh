#!/bin/bash
allfile="allcfiles.txt"
while IFS= read -r eachfile
do
    python show_ast_pycparser.py "c_files_woc/$eachfile" &> "ast_pycparser/$eachfile.ast"
done < "$allfile"
