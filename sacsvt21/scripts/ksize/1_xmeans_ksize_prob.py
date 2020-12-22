import pandas as pd, numpy as np, random
from pyclustering.cluster.xmeans import xmeans
from pyclustering.cluster.center_initializer import kmeans_plusplus_initializer

#read sample
fname = "../../data/args/args_norm.csv"
df_args = pd.read_csv(fname)
df_args = df_args.drop('i', axis=1)
df_args = df_args.drop('cfile', axis=1)
df_args = df_args.drop('main', axis=1)
sample = df_args.values.tolist()
print("sample = ", len(sample))

#iterative df_centroids
columns_name = df_args.columns.tolist()
columns_name.append('ksize')
df_centroids = pd.DataFrame(columns = columns_name)

#process xmeans
amount_initial_centers = len(columns_name) - 1
amount_max_centers = int(len(sample)/amount_initial_centers)
initial_centers = kmeans_plusplus_initializer(sample, amount_initial_centers).initialize()
xmeans_instance = xmeans(sample, initial_centers, amount_max_centers)
xmeans_instance.process()
clusters = xmeans_instance.get_clusters()
centers = xmeans_instance.get_centers()
for i in range(0,len(clusters)):
    centers[i].append(len(clusters[i]))
print("centers = ", len(centers))

#filter clusters
df_temp = pd.DataFrame(np.array(centers))
df_temp.columns = columns_name
df_centroids = df_temp
df_centroids = df_centroids.sort_values('ksize',ascending=False)
df_centroids = df_centroids.drop_duplicates(columns_name[:-1],keep='last')
print("centroids = ", len(df_centroids))

#write centroids
fname = "centroids_ksize_prob.csv"
df_centroids = df_centroids.loc[(df_centroids!=0).any(axis=1)]
df_centroids.to_csv(fname, sep=',', encoding='utf-8', index=False)
