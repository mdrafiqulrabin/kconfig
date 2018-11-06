#!/usr/bin/python
# -*- coding: utf-8 -*-

import sys, os
from subprocess import Popen, PIPE

### parameters ###
out_csmith_c = "sample_csmith.c"
out_gcc_my = "out_gcc_my.txt"
out_gcc_48 = "out_gcc_48.txt"

path_csmith  = "/Users/mdrafiqulrabin/bin/csmith-bin/bin/csmith"
path_csmith_header = "/Users/mdrafiqulrabin/bin/csmith-bin/include/csmith-2.3.0"
path_gcc_my = "gcc -c -w -O3 -I" + path_csmith_header + " " + out_csmith_c
path_gcc_48 = "/Users/mdrafiqulrabin/bin/gcc4.8-bin/bin/gcc -c -w -O3 -I" + path_csmith_header + " " + out_csmith_c

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

count_itr = 0
while (1):
    count_itr += 1
    print "count_itr = ", count_itr
    
    #create sample CSmith c program
    c_program = run_shell(path_csmith, 1) #1=out
    c_program = getCsmithCode(c_program)
    saveToFile(out_csmith_c, c_program)

    #compile with gcc main
    errMsg1 = run_shell(path_gcc_my, 2) #2=err
    errMsg1 = getPlainText(errMsg1)

    #compile with gcc 48
    errMsg2 = run_shell(path_gcc_48, 2) #2=err
    errMsg2 = getPlainText(errMsg2)

    if (len(errMsg1)>0 or len(errMsg2)>0):
        print "errMsg(my): ", errMsg1
        saveToFile(out_gcc_my, errMsg1)
        print "errMsg(48): ", errMsg2
        saveToFile(out_gcc_48, errMsg2)
        break

print "Done: ..."
