# all_c_gcov_files: x-axis: all gcov files and y-axis: line number of gcov file
# output_file: x-axis: all c files and y-axis: gcov stats for all gcov files

import sys, os

### parameters ###

path_all_c_gcov_files = "gcov-tsv-output-wc"
output_file = "all-gcov-stats-single.tsv"

### methods ###

def saveToFile(out_file, tmp_data):
    with open (out_file, 'a') as fout:
        fout.write(tmp_data)
        fout.write('\n')

### main ###

print "Start: ..."

os.remove(output_file) if os.path.exists(output_file) else None
all_c_gcov_files = os.listdir(path_all_c_gcov_files)

for c_gcov_file in all_c_gcov_files:
    c_gcov_file = path_all_c_gcov_files + "/" + c_gcov_file
    if (not c_gcov_file.endswith(".tsv")): continue
    print c_gcov_file
    
    single_line_stats = ""
    with open(c_gcov_file) as fin:
        for current_line in fin:
            if len(single_line_stats) > 0: single_line_stats += "\t"
            single_line_stats += current_line

    saveToFile(output_file, single_line_stats)



print "Done: ..."
