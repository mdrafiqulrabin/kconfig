#!/usr/bin/python
import sys, os, shutil

src_file = ""
dst_file_cur = "AST2/correct"
dst_file_war = "AST2/warning"
dst_file_err = "AST2/error"

all_files = os.listdir("AST1/")
for file_name in all_files:
    src_file = "AST1/" + file_name
    if (not src_file.endswith(".c.ast")):
        continue
    with open(src_file) as rd_file:
        for line in rd_file:
            if line.startswith("TranslationUnitDecl:"):
                shutil.copy2(src_file, dst_file_cur)
            else:
                if line.find("error:") == -1:
                    shutil.copy2(src_file, dst_file_err)
                else:
                    shutil.copy2(src_file, dst_file_war)
            break
        
print ("Done...")
