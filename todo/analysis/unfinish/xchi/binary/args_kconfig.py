import pandas as pd
df1 = pd.read_csv("args_centroids.csv")
nc = len(df1.index)
mx = 5960

flist = []
for i in range(0,mx):
    p = i % nc
    flist.append(list(df1.iloc[p]))

df2 = pd.DataFrame(flist, columns=df1.columns)
df2.to_csv("args_kconfig.csv",index=False)
