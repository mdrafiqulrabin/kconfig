# Note: run from an empty folder because it will create *.c.gcov file in current directory
# Run: /Users/mdrafiqulrabin/Desktop/Rabin/gcov/my-run
# sample: "/Users/mdrafiqulrabin/Desktop/Rabin/gcov/sample-c/"
# C-file: "/Users/mdrafiqulrabin/Desktop/Rabin/gcov/c_files_wc/"
# output_files: x-axis: gcov files and y-axis: line number

import sys, os, json, time
from subprocess import Popen, PIPE
import subprocess

### parameters ###

path_c_files = "/Users/mdrafiqulrabin/Desktop/Rabin/gcov/c_files_wc/"
#path_c_files = "/Users/mdrafiqulrabin/Desktop/Rabin/gcov/sample-c/"
path_gcc_build = "/Users/mdrafiqulrabin/bin/gcc-4.8.0/build/gcc/"
path_gcc_bin = "/Users/mdrafiqulrabin/bin/gcc4.8-bin/bin/"
output_folder = "gcov-tsv-output-wc/"

count_1 = 0

### methods ###

def voidRunShell(cmd):
    try:
        subprocess.check_output(cmd, stderr=subprocess.STDOUT, shell=True)
    except Exception:
        pass #do nothing

def outRunShell(cmd):
    outmsg = ""
    try:
        procs  = Popen(cmd, shell=True, stdin=PIPE, stdout=PIPE, stderr=PIPE, close_fds=True)
        outmsg = procs.stdout.readlines()
    except Exception:
        pass #do nothing
    return outmsg

def rmBuildFiles():
    #[rm from current directory (if)]
    voidRunShell("rm *.gcda *.gcov *.o")
    #[rm from path_gcc_build (if)]
    voidRunShell("rm " + path_gcc_build + "*.gcda")
    voidRunShell("rm " + path_gcc_build + "*.gcov")
    voidRunShell("rm " + path_gcc_build + "*.o")

def getTsvData(gcov_f, gcov_s):
    tsv_line = ""
    for gs in gcov_s:
        line_covered_binary = ""
        gs_value = gs[0].strip()
        gs_line  = gs[1].strip()
        if int(gs_line) <= 0: continue
        try:
            if int(gs_value)>0:
                line_covered_binary = "1"
                global count_1
                count_1 += 1
            else:
                line_covered_binary = "0"
        except ValueError:
            line_covered_binary = "0"
        
        if len(tsv_line)>0:
            tsv_line += "\t" + line_covered_binary
        else:
            tsv_line += line_covered_binary
    return tsv_line

def saveToFile(out_file, tmp_data):
    out_file = output_folder + out_file.split(".c")[0] + "-gcov.tsv"
    with open (out_file, 'a') as fout:
        fout.write(tmp_data)
        fout.write('\n')

### main ###

print "Start: all..."
cmd = "rm " + output_folder + "*.*"
voidRunShell(cmd)
rmBuildFiles()

all_c_files = os.listdir(path_c_files)
for c_file in all_c_files:
    if (not c_file.endswith(".c")): continue
    
    cmd = path_gcc_bin + "gcc -c " + path_c_files + c_file
    voidRunShell(cmd) #[*.o in current directory and *.gcda in ~/bin/gcc4.8-bin/bin/gcc]
    
    cmd = "gcov " + path_gcc_build + "*.gcda"
    voidRunShell(cmd) #[*.gcov in current directory]
    
    cmd = "find *.c.gcov"
    all_gcov_files = outRunShell(cmd)
    
    all_gcov_files = [x.split("\n")[0].split("/")[-1] for x in all_gcov_files]
    for gcov_file in all_gcov_files:
        cmd = "cat " + gcov_file
        gcov_stats = outRunShell(cmd)
        gcov_stats = [x.replace(" ","").split(":")[:2] for x in gcov_stats]
        saveToFile(c_file, getTsvData(gcov_file, gcov_stats))
        print ("Done: " + c_file + "-" + gcov_file)
    
    rmBuildFiles()
    print ("Done: " + c_file + "...")


rmBuildFiles()
print "Done: all..."
