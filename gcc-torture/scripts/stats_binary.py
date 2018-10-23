import os, sys

input_file  = "../stats/gcc_torture_stats_decimal.tsv"
output_file = "../stats/gcc_torture_stats_binary.tsv"

### main ###

if os.path.exists(output_file):
    os.remove(output_file)

with open(input_file,'r') as fin:
    with open(output_file,'a') as fout:
        lines = fin.readlines()
        for line in lines:
            parts = line.split("\t")
            binaryLine = ""
            for part in parts:
                part = part.strip()
                if len(binaryLine) > 0:
                    binaryLine += "\t"
                if int(part) > 0:
                    binaryLine += "1"
                else:
                    binaryLine += "0"
            fout.write(binaryLine)
            fout.write("\n")
