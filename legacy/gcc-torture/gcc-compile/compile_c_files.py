#compile c file with gcc -c t.c

import sys, os
from subprocess import Popen, PIPE

path_name = "c_files_woc/"
outputFile = "gcc_error_details.txt"

countError = 0
countSuccess = 0
countTotal = 0

warningDetails = ""
errorDetails = ""

def saveToFile(fileName, line):
    with open (fileName, 'a') as file:
        file.write(line)
        file.write('\n')

if os.path.exists(outputFile):
    os.remove(outputFile)

def checkError(obj):
    if obj.find("error generated") != -1:
        return 1
    elif obj.find("errors generated") != -1:
        return 1
    else:
        return 0

all_files = os.listdir(path_name)
for file_name in all_files:
    if (not file_name.endswith(".c")):
        continue
    cmd = "gcc -c " + path_name + file_name
    countTotal += 1
    procs  = Popen(cmd, shell=True, stdin=PIPE, stdout=PIPE, stderr=PIPE, close_fds=True)
    eowMsg = procs.stderr.readlines()
    if(len(eowMsg) != 0 and checkError(eowMsg[-1]) == 1):
        errorDetails += "\n" + file_name + ":\n" + str(eowMsg) + "\n"
        countError += 1
    else:
        countSuccess += 1
    print str(countTotal) + " : " + str(countSuccess) + " : " + str(countError)

errorDetails = "Error details:\n" + errorDetails
errorDetails = "gcc pass: " + str(countSuccess) + "\n" + errorDetails
errorDetails = "gcc error: " + str(countError) + "\n" + errorDetails
errorDetails = "Total c file: " + str(countTotal) + "\n" + errorDetails

saveToFile(outputFile, errorDetails)
print "Done..."


