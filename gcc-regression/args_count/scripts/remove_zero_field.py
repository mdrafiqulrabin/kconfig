import os

input_file  = "gcc_reg_stats_original.csv"
output_file = "gcc_reg_stats_nonzero.csv"

gccStatsAll = ""
gccStatsNonZero = ""

### method ###

def allZero(parts):
    for part in parts:
        part = part.strip()
        try:
            if (int(part) > 0):
                return 0
        except:
            continue
    return 1

### main ###

if os.path.exists(output_file):
    os.remove(output_file)

with open(input_file,'r') as fin:
    with open(output_file,'a') as fout:
        lines = fin.readlines()
        fout.write(lines[0]) #save file names
        lines = lines[3:] #ignore file name and size fields
        for line in lines:
            if len(line.strip()) == 0 : continue
            if allZero(line.split(",")[1:]) == 1 : continue
            fout.write(line)

