#!/usr/bin/python

import csv
from itertools import izip

### params ###

in_file  = "gcc_reg_arg_stats_YX.csv"
out_file = "gcc_reg_arg_stats_XY.csv"

### functions ###

def transposeCSV(fin, fout):
    z = izip(*csv.reader(open(fin, "rb")))
    csv.writer(open(fout, "wb")).writerows(z)

### main ###

print "Start: ..."
transposeCSV(in_file, out_file)
print "Done: ..."
