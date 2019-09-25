#!/usr/bin/python
import csv, random, math
import numpy as np
from matplotlib import pyplot as plt

#Parameters
csv_in_file = 'gcov-stats-single-vd.csv'
hg_out_file_xy = "single_vec_hg_xy.png"
hg_out_file_yx = "single_vec_hg_yx.png"
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
    
    plt.title('Histogram XY')
    plt.xlabel('x = Number of Test Cases')
    plt.ylabel('y = Number of Statements')
    
    #plt.show()
    plt.savefig(hg_out_file_xy, bbox_inches='tight')

def drawHistogramYX(data):
    plt.hist(data, bins=fixedBinSize, alpha=0.5, orientation='horizontal')
    plt.ylim([min(data)-5, max(data)+5])
    
    plt.title('Histogram YX')
    plt.ylabel('y = Number of Test Cases')
    plt.xlabel('x = Number of Statements')
    
    #plt.show()
    plt.savefig(hg_out_file_yx, bbox_inches='tight')

#Main
data = getSingleVec()
drawHistogramXY(data)
plt.gcf().clear()
drawHistogramYX(data)
