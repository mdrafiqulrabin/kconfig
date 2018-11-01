# input_file: gcov-stats-single_decimal.tsv
# 0 3 0 7
# 0 2
# 7 0 3

# output_file: gcov-stats-single-vd.tsv
#3 7 2 7 3

### parameters ###

in_file = "gcov-stats-single_decimal.tsv"
out_file_csv = "gcov-stats-single-vd.csv"
out_file_tsv = "gcov-stats-single-vd.tsv"

### methods ###

def saveToFile(out_file, tmp_data):
    with open (out_file, 'w') as fout:
        fout.write(tmp_data)
        fout.write('\n')

### main ###

print "Start: all..."

count_zero = 0
count_nonzero = 0
count_total = 0

csv_data = ""
tsv_data = ""

with open (in_file, 'r') as fin:
    for line in fin:
        line = line.strip().split("\t")
        for val in line:
            if (len(val.strip())<=0): continue
            try:
                count_total += 1
                if int(val)>0:
                    count_nonzero += 1
                    if len(csv_data) > 0 or len(tsv_data) > 0:
                        csv_data += ","
                        tsv_data += "\t"
                    csv_data += val
                    tsv_data += val
                else:
                    count_zero += 1
            except:
                print "error and exit"
                exit()

saveToFile(out_file_csv,csv_data)
saveToFile(out_file_tsv,tsv_data)

print "count_zero = ", count_zero
print "count_nonzero = ", count_nonzero
print "count_total = ", count_total

print "Done: all..."
