import sys, os, json
from subprocess import Popen, PIPE

path_c_files = "files/"
path_gcc_build = "/Users/mdrafiqulrabin/bin/gcc-4.8.0/build/gcc/"
path_gcc_bin = "/Users/mdrafiqulrabin/bin/gcc4.8-bin/bin/"
outputFile = "gcov_stats.tsv"

def runShell(cmd):
    procs  = Popen(cmd, shell=True, stdin=PIPE, stdout=PIPE, stderr=PIPE, close_fds=True)
    outmsg = procs.stdout.readlines()
    return outmsg

def rmBuildFiles():
    runShell("rm " + path_c_files + "*.o")
    runShell("rm " + path_gcc_build + "*.gcda")
    runShell("rm " + "*.o")

def getJsonData(gcov_f, gcov_s):
    data = {}
    data['filename'] = gcov_f
    data['gcov_stats'] = gcov_s
    json_data = json.dumps(data, sort_keys=True)
    return json_data

def saveToFile(c_file, json_data):
    c_file = "gcov-output/" + c_file.split(".c")[0] + "-gcov.txt"
    #if os.path.exists(c_file): os.remove(c_file)
    with open (c_file, 'a') as file:
        file.write(json_data)
        file.write('\n')

all_c_files = os.listdir(path_c_files)
for c_file in all_c_files:
    if (not c_file.endswith(".c")):continue
    rmBuildFiles()
    runShell(path_gcc_bin + "gcc -c " + path_c_files + c_file)
    runShell(path_gcc_build + "gcov *.gcda")
    all_gcov_files = runShell("find " + path_gcc_build + "*.c.gcov")
    all_gcov_files = [x.split("\n")[0].split("/")[-1] for x in all_gcov_files]
    for gcov_file in all_gcov_files:
        gcov_stats = runShell("cat " + path_gcc_build + gcov_file)
        gcov_stats = [x.replace(" ","").split(":")[:2] for x in gcov_stats]
        saveToFile(c_file, getJsonData(gcov_file, gcov_stats))
        print ("Done: " + c_file + "-" + gcov_file)

rmBuildFiles()
print "Done: all..."
