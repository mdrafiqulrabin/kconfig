#!/usr/bin/python
import sys, os, shutil

src_file = ""
dst_file_cur = "ast_files/correct"
dst_file_err = "ast_files/error"

all_files = os.listdir("ast_pycparser/")
for file_name in all_files:
    src_file = "ast_pycparser/" + file_name
    if (not src_file.endswith(".c.ast")):
        continue
    with open(src_file) as rd_file:
        for line in rd_file:
            if line.startswith("FileAST:"):
                shutil.copy2(src_file, dst_file_cur)
            else:
                shutil.copy2(src_file, dst_file_err)
            break
        
print ("Done...")
