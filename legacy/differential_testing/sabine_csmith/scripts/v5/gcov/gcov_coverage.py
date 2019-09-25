# Note: run from an empty folder because it will create *.c.gcov file in current directory
# output_files: x-axis: [gcov files] and y-axis: [file,total_line,cover_line,not_cover_line,na_line,line_covered_binary]

import sys, os, json, time
from subprocess import Popen, PIPE
import subprocess

### parameters ###

path_c_files = "/Users/mdrafiqulrabin/Desktop/Doctoral-Research/differential_testing/sabine_csmith/results/v5/tout10/r1/gcc482/swarm/save_tc/wc"
path_gcc_build = "/Users/mdrafiqulrabin/bin/gcc-4.8.2/build/gcc/"
path_gcc_bin = "/Users/mdrafiqulrabin/bin/gcc482-bin/bin/"
output_folder = "/Users/mdrafiqulrabin/Desktop/Doctoral-Research/differential_testing/sabine_csmith/results/v5/tout10/r1/gcc482/swarm/save_tc/gcov/"

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
    voidRunShell("rm -rf *.gcda *.gcov *.o")
    #[rm from path_gcc_build (if)]
    voidRunShell("rm -rf " + path_gcc_build + "*.gcda")
    voidRunShell("rm -rf " + path_gcc_build + "*.gcov")
    voidRunShell("rm -rf " + path_gcc_build + "*.o")

#cmnt="""
def getLineCoverage(gcov_f, gcov_s):
    csv_line = ""
    cnt_t = 0; cnt_y = 0; cnt_n = 0; cnt_x = 0
    for gs in gcov_s:
        line_covered_binary = ""
        gs_value = gs[0].strip()
        gs_line  = gs[1].strip()
        if int(gs_line) <= 0: continue
        cnt_t += 1
        try:
            if int(gs_value)>0:
                line_covered_binary = "1"
                cnt_y += 1
            else:
                line_covered_binary = "0"
                cnt_n += 1
        except ValueError:
            if gs_value == "#####":
                line_covered_binary = "0"
                cnt_n += 1
            else:
                line_covered_binary = "-1"
                cnt_x += 1
        
        if len(csv_line)>0:
            csv_line += "," + line_covered_binary
        else:
            csv_line += line_covered_binary
    csv_line = gcov_f + "," + str(cnt_t) + "," + str(cnt_y) + "," + str(cnt_n) + "," + str(cnt_x) + "," + csv_line
    return csv_line

def saveToFile(out_file, tmp_data):
    out_file = output_folder + out_file.split(".c")[0] + "-gcov.csv"
    with open (out_file, 'a') as fout:
        fout.write(tmp_data)
        fout.write('\n')
#""" #cmnt

### main ###

print ("\nStart: all...")
cmd = "rm -rf " + output_folder + "*.*"
voidRunShell(cmd)
rmBuildFiles()

all_c_files = os.listdir(path_c_files)
for c_file in all_c_files:
    if (not c_file.endswith(".c")): continue
    print ("\nStart: " + c_file + "...")

    cmd = path_gcc_bin + "gcc -c " + path_c_files + c_file
    voidRunShell(cmd) #[*.o in current directory and *.gcda in ~/bin/gcc4.8-bin/bin/gcc]
    
    cmd = "gcov " + path_gcc_build + "*.gcda"
    voidRunShell(cmd) #[*.gcov in current directory]
    
    cmd = "find *.c.gcov"
    all_gcov_files = outRunShell(cmd)
    
    all_gcov_files = [x.split("\n")[0].split("/")[-1] for x in all_gcov_files]
    #for gcov_file in all_gcov_files:
        #print (gcov_file)
    
    #cmnt="""
    for gcov_file in all_gcov_files:
        cmd = "cat " + gcov_file
        gcov_stats = outRunShell(cmd)
        gcov_stats = [x.replace(" ","").split(":")[:2] for x in gcov_stats]
        #print(gcov_stats)
        saveToFile(c_file, getLineCoverage(gcov_file, gcov_stats))
        print ("Done: " + c_file + "-" + gcov_file)
    #""" #cmnt
    
    rmBuildFiles()
    print ("\nDone: " + c_file + "...")

rmBuildFiles()
print ("\nDone: all...")
