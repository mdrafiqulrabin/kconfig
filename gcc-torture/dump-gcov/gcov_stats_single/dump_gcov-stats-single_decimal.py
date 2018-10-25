# x-axis: all gcov files and y-axis: line number of gcov file
# [x][y] gcov stats for all c files

import sys, os

### parameters ###

path_all_c_gcov_files = "gcov_stats_all"
#path_all_c_gcov_files = "gcov_stats_temp" #temp

output_file = "gcov-stats-single_decimal.tsv"

### methods ###

def getBinary2d(in_file):
    binary_2d = []
    with open (in_file, 'r') as fin:
        for line in fin:
            binary_1d = []
            #line = [x for x in line.strip().split(" ") if len(x.strip())>0] #temp
            line = [x for x in line.strip().split("\t") if len(x.strip())>0]
            for binary in line:
                binary_1d.append(int(binary))
            binary_2d.append(binary_1d)
    return binary_2d

def getTsvData(binary_2d):
    final_data = ""
    for i in binary_2d:
        temp_data = ""
        for j in i:
            if (len(temp_data)>0): temp_data += "\t"
            temp_data += str(j)
        final_data += temp_data + "\n"
    return final_data

def saveToFile(out_file, tmp_data):
    with open (out_file, 'w') as fout:
        fout.write(tmp_data)
        fout.write('\n')

### main ###

print "Start: ..."

os.remove(output_file) if os.path.exists(output_file) else None
all_c_gcov_files = os.listdir(path_all_c_gcov_files)

#result_binary_2d = getBinary2d(path_all_c_gcov_files + "/t0.tsv") #temp
result_binary_2d = getBinary2d("gcov_stats_zero.tsv")

for c_gcov_file in all_c_gcov_files:
    c_gcov_file = path_all_c_gcov_files + "/" + c_gcov_file
    #ignore problematic input
    if (not c_gcov_file.endswith(".tsv")): continue
    if (c_gcov_file.endswith("pr58088-gcov.tsv")): continue
    print c_gcov_file
    temp_binary_2d = getBinary2d(c_gcov_file)
    
    for i, binary_1d in enumerate(temp_binary_2d):
        for j, binary in enumerate(binary_1d):
            result_binary_2d[i][j] += temp_binary_2d[i][j] #ADD

saveToFile(output_file, getTsvData(result_binary_2d))

print "Done: ..."
