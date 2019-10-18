import pandas as pd, numpy as np, random
from pyclustering.cluster.xmeans import xmeans

#read sample
fname = "args_norm.csv"
df_args = pd.read_csv(fname)
df_args = df_args.drop('i', axis=1)
df_args = df_args.drop('cfile', axis=1)
df_args = df_args.drop('main', axis=1)
sample = df_args.values.tolist()
print("sample = ", len(sample))

#parameters
n_max_itr = 1000

#iterative df_centroids
columns_name = df_args.columns.tolist()
columns_name.append('ksize')
df_centroids = pd.DataFrame(columns = columns_name)

itr=0
while itr < n_max_itr:
    itr = itr + 1
    print("\n[ itr = ", itr, " ]")
    
    #process xmeans
    xmeans_instance = xmeans(sample)
    xmeans_instance.process()
    clusters = xmeans_instance.get_clusters()
    centers = xmeans_instance.get_centers()
    for i in range(0,len(clusters)):
        w = len(clusters[i])
        centers[i].append(w)
    print("centers = ", len(centers))

    #filter clusters
    df_temp = pd.DataFrame(np.array(centers))
    df_temp.columns = columns_name
    for cn in df_args: df_temp[cn] = np.where(df_temp[cn] < df_args[cn].mean(), 1, 0)
    df_centroids = df_centroids.append(df_temp)
    df_centroids = df_centroids.sort_values('ksize',ascending=False)
    df_centroids = df_centroids.drop_duplicates(columns_name[:-1],keep='last')
    print("centroids = ", len(df_centroids))

#write centroids
fname = "size_centroids_1K.csv"
df_centroids = df_centroids.loc[(df_centroids!=0).any(axis=1)]
df_centroids.to_csv(fname, sep=',', encoding='utf-8', index=False)
