#!/usr/bin/python

import pandas as pd
import numpy as np
from sklearn.cluster import KMeans

### params ###
fin_arg_stats = "../arg_stats/gcc_reg_arg_stats_binary.csv"
no_of_clusters = [1, 2, 4, 8, 16]

### function ###

def apply_kmeans_cluster(nc):
    print(); print("n_clusters = ", nc); print()
    kmeans = KMeans(n_clusters=nc, random_state=0).fit(X)

    # Getting scikit-learn centroids
    centroids = kmeans.cluster_centers_
    #fn = "data/kmeans_centroids_original_" + str(nc) + ".csv"
    #np.savetxt(fn, centroids, header=mheader, comments="", delimiter=",")
    #print(centroids)

    #print()
    
    # Set centroids as binary 0/1 for threshold = 0.5
    centroids = [[0 if (x < 0.5) else 1 for x in y] for y in centroids]
    fn = "data/kmeans_centroids_binary_" + str(nc) + ".csv"
    np.savetxt(fn, centroids, fmt="%d", header=mheader, comments="", delimiter=",")
    print(centroids)

### main ###

df = pd.read_csv(fin_arg_stats)
mheader = df.columns.tolist()
mheader = ",".join(map(str, mheader))
X  = np.array(df)
for nc in no_of_clusters: apply_kmeans_cluster(nc)
