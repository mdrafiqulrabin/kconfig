#!/usr/bin/python
import csv, random, math
import numpy as np
from matplotlib import pyplot as plt

#Parameters
csv_in_file = "gcov_data/gcov_stats_single/gcov_stats_single_vector_woz.csv"
hg_out_file = "gcov_diagram/single_vector_hg.png"

fixedBinSize = 100

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

def drawHistogramXY(data):
    plt.hist(data, bins=fixedBinSize, alpha=0.5)
    
    plt.xlim([min(data)-5, max(data)+5])
    #plt.title('Histogram(bin=?)')
    plt.xlabel('Number of Test Cases')
    plt.ylabel('Number of Statements')
    
    #plt.show()
    plt.savefig(hg_out_file, bbox_inches='tight')

#Main
data = getSingleVec()
drawHistogramXY(data)
