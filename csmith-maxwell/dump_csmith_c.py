import sys, os
from subprocess import Popen, PIPE

### parameters ###
path_csmith  = "/Users/mdrafiqulrabin/bin/csmith-bin/bin/csmith"

output_cfile = "sample_csmith.c"

include_csmith_header_l = "#include \"csmith.h\""
include_csmith_header_f = "#include \"/Users/mdrafiqulrabin/bin/csmith-bin/include/csmith-2.3.0/csmith.h\""

### methods ###
def outRunShell(cmd):
    outMsg = ""
    try:
        procs  = Popen(cmd, shell=True, stdin=PIPE, stdout=PIPE, stderr=PIPE, close_fds=True)
        outMsg = procs.stdout.readlines()
    except Exception as ex:
        outMsg = "Exception: " + str(ex)
        print outMsg
        pass #do nothing
    return outMsg

def getCode(obj):
    code = ""
    for x in obj:
        if x.startswith(include_csmith_header_l):
            x = x.replace(include_csmith_header_l, include_csmith_header_f)
        code += x
    return code

def saveToFile(out_file, tmp_data):
    with open (out_file, 'w') as fout:
        fout.write(tmp_data)

### main ###
print "Start: ..."

#os.remove(output_cfile) if os.path.exists(output_cfile) else None

#create sample CSmith c program
c_program = outRunShell(path_csmith)
c_program = getCode(c_program)
saveToFile(output_cfile, c_program)

print "Done: ..."
