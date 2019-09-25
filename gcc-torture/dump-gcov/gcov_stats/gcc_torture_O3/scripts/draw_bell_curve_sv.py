#!/usr/bin/python
import csv
import numpy as np
from matplotlib import pyplot as plt
import scipy.stats as sct

#Parameters
csv_in_file = "gcov_data/gcov_stats_single/gcov_stats_single_vector_woz.csv"
bc_out_file = "gcov_diagram/single_vector_bc.png"

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
#plt.xlabel('x = how many times a line has been covered')
#plt.ylabel('y = probability of line coverage')

#plt.show()
plt.savefig(bc_out_file, bbox_inches='tight')
