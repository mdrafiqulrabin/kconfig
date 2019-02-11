#!/usr/bin/python

import pandas as pd
import numpy as np
from sklearn.cluster import KMeans

# Dataset of gcc arg stats
fin_arg_stats = "gcc_reg_arg_stats_binary.csv"

# Number of clusters
no_of_clus = 16

# Importing the dataset
data_args = pd.read_csv(fin_arg_stats)

# Getting the values
X = np.array(data_args)

# KMeans clusters
kmeans = KMeans(n_clusters=no_of_clus,random_state=0).fit(X)

# Getting Centroid values
centroids = kmeans.cluster_centers_

#Print scikit-learn centroids
print(centroids)

# Setting as binary 0/1 for limit = 0.5
centroids = [[0 if (x < 0.5) else 1 for x in y] for y in centroids]

#Print scikit-learn centroids
for c in centroids: print c
