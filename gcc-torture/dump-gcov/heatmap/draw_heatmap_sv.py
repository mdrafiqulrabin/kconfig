#!/usr/bin/python
import csv
import numpy as np
import seaborn as sb

#Parameters
csv_in_file = 'gcov-stats-single-vd.csv'
heatmap_out_file = "single_vec_hm.png"

#Methods
def getSingleVec():
    single_vec = []
    with open(csv_in_file,'r') as csvfile:
        reader = csv.reader(csvfile, delimiter=',')
        for line in reader:
            line = [int(x) for x in line]
            single_vec = line
            break #single line vector
    return single_vec

#Main
single_vec = np.asarray(getSingleVec())
hm = sb.heatmap([single_vec], cmap = sb.cm.rocket_r, xticklabels=2, yticklabels=False)
hm.get_figure().savefig(heatmap_out_file)
