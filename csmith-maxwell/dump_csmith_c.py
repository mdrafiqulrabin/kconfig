#!/usr/bin/python
# -*- coding: utf-8 -*-

import sys, os
from subprocess import Popen, PIPE

### parameters ###
out_csmith_c = "sample_csmith.c"
out_gcc_my = "out_gcc_my.txt"
out_gcc_48 = "out_gcc_48.txt"

path_csmith  = "/Users/mdrafiqulrabin/bin/csmith-bin/bin/csmith"
path_gcc_my = "gcc -c -w " + out_csmith_c
path_gcc_48 = "/Users/mdrafiqulrabin/bin/gcc4.8-bin/bin/gcc -c -w " + out_csmith_c

include_csmith_header_l = "#include \"csmith.h\""
include_csmith_header_f = "#include \"/Users/mdrafiqulrabin/bin/csmith-bin/include/csmith-2.3.0/csmith.h\""

known_gcc_warning_kern = "gcc: warning: couldn’t understand kern.osversion"

### methods ###
def run_shell(cmd, std_flag):
    std_msg = ""
    try:
        procs  = Popen(cmd, shell=True, stdin=PIPE, stdout=PIPE, stderr=PIPE, close_fds=True)
        if (std_flag == 0):
            std_msg = procs.stdin.readlines()
        elif (std_flag == 1):
            std_msg = procs.stdout.readlines()
        elif (std_flag == 2):
                std_msg = procs.stderr.readlines()
    except Exception as ex:
        std_msg = "Exception: " + str(ex)
        print std_msg
        pass #do nothing
    return std_msg

def getCsmithCode(obj):
    code = ""
    for x in obj:
        if x.startswith(include_csmith_header_l):
            x = x.replace(include_csmith_header_l, include_csmith_header_f)
        code += x
    return code

def getPlainText(obj):
    text = ""
    for x in obj:
        if x.startswith(known_gcc_warning_kern):
            continue
        text += x
    return text

def saveToFile(out_file, tmp_data):
    with open (out_file, 'w') as fout:
        fout.write(tmp_data)

### main ###
print "Start: ..."

#os.remove(output_cfile) if os.path.exists(output_cfile) else None

#create sample CSmith c program
c_program = run_shell(path_csmith, 1) #1=out
c_program = getCsmithCode(c_program)
saveToFile(out_csmith_c, c_program)

#compile with my gcc
errMsg = run_shell(path_gcc_my, 2) #2=err
errMsg = getPlainText(errMsg)
print "errMsg(my): ", errMsg
saveToFile(out_gcc_my, errMsg)

#compile with my gcc
errMsg = run_shell(path_gcc_48, 2) #2=err
errMsg = getPlainText(errMsg)
print "errMsg(48): ", errMsg
saveToFile(out_gcc_48, errMsg)

print "Done: ..."
