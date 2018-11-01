import os

input_file  = "../stats/gcc_torture_stats_original.tsv"
output_file = "../stats/gcc_torture_stats_decimal.tsv"

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

if os.path.exists(output_file): os.remove(output_file)

with open(input_file,'r') as fin:
    with open(output_file,'a') as fout:
        lines = fin.readlines()
        lines = lines[3:] #ignore file name and size fields
        for line in lines:
            if len(line.strip()) == 0 : continue
            line = line.split("\t")[1:]
            if allZero(line) == 1 : continue
            line = "\t".join(line)
            fout.write(line)

