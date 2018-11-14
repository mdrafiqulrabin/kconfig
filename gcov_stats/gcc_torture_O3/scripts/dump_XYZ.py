

### parameters ###

in_file = "gcov_data/gcov_stats_single/gcov_stats_single_vector_woz.tsv"

### methods ###

def saveToFile(out_file, tmp_data):
    with open (out_file, 'w') as fout:
        fout.write(tmp_data)
        fout.write('\n')

### main ###

print "Start: all..."

count_1 = 0
count_2 = 0
count_4 = 0
count_8 = 0

count_5 = 0

count_total = 0

with open (in_file, 'r') as fin:
    for line in fin:
        line = line.strip().split("\t")
        for val in line:
            if (len(val.strip())<=0): continue
            try:
                count_total += 1
                
                if int(val)<1:
                    count_1 += 1
        
                if int(val)<2:
                    count_2 += 1
            
                if int(val)<4:
                    count_4 += 1
                    
                if int(val)<8:
                    count_8 += 1
                        
                if int(val)<5:
                    count_5 += 1
                
            except:
                print "error and exit"
                exit()

print "less than 1 = ", count_1
print "less than 2 = ", count_2
print "less than 4 = ", count_4
print "less than 8 = ", count_8

print "less than 5 = ", count_5
print "count_total = ", count_total

print "Done: all..."
