#!/usr/bin/python
import csv
import numpy as np
from matplotlib import pyplot as plt
import scipy.stats as sct

#Parameters
csv_in_file = 'gcov-stats-single-vd.csv'
bc_out_file = "single_vec_bc.png"

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
data = getSingleVec()
data.sort()
mu = np.mean(data)
sd = np.std(data)
pdf = sct.norm.pdf(data, mu, sd)
plt.plot(data, pdf)

plt.title('Bell Shaped Curve')
plt.xlabel('x = Number of Test Cases')
plt.ylabel('y = Number of Statements')

#plt.show()
plt.savefig(bc_out_file, bbox_inches='tight')
