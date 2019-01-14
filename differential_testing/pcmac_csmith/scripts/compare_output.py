#!/usr/bin/python

# Compair two files and copy to another place if not equal

import os, datetime, shutil

out421 = ""
with open('out421.txt', 'r') as myfile:
    out421 = myfile.read()
out421 = ''.join(out421.split())

out480 = ""
with open('out480.txt', 'r') as myfile:
    out480 = myfile.read()
out480 = ''.join(out480.split())

if not(out421 == out480):
    timestamp = str(datetime.datetime.now()).replace("-","").replace(":","").replace(".","").replace(" ","")
    dst_dir = "save_tc/" + timestamp
    if not os.path.exists(dst_dir): os.makedirs(dst_dir)
    shutil.copy("tc.c", dst_dir + "/tc.c")
    shutil.copy("out421.txt", dst_dir + "/out421.txt")
    shutil.copy("out480.txt", dst_dir + "/out480.txt")
