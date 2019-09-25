import os

input_file  = "gcc_reg_stats_original.tsv"
output_file = "gcc_reg_stats_binary.tsv"

### main ###

if os.path.exists(output_file):
    os.remove(output_file)

with open(input_file,'r') as fin:
    with open(output_file,'a') as fout:
        lines = fin.readlines()
        for line in lines:
            parts = line.split("\t");
            binaryLine = ""
            for part in parts:
                if int(part) > 0:
                    binaryLine += "\t" + "1"
                else:
                    binaryLine += "\t" + "0"
            fout.write(binaryLine)
            fout.write("\n")
