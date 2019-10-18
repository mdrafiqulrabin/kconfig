import pandas as pd
import numpy as np
from sklearn.preprocessing import MinMaxScaler

def summary_m(str, df):
    print("[ ", str, " ] :")
    print("df_columns = ", len(df.columns))
    print("df_rows = ", len(df.index))
    print("\n")

def filter_m(df):
    df = df.loc[~(df==0).all(axis=1)]
    df = df.loc[:, (df != 0).any(axis=0)]
    return df

def normalize_m(df):
    nclos = df.select_dtypes(include=[np.number]).columns.tolist()
    scaler = MinMaxScaler(feature_range=(0, 1))
    data = df[nclos]
    scaler.fit(data)
    df = pd.DataFrame(data=scaler.transform(data),columns=nclos)
    return df

def main(f):
    fname = "../data/args_" + f + "_10k.csv"
    df = pd.read_csv(fname)
    df = df.drop(['i','cfile','argc','main'], axis=1)
    df = filter_m(df)
    df = normalize_m(df)
    fname = "../data/args_" + f + "_norm.csv"
    df.to_csv(fname, sep=',', encoding='utf-8', index=False)

args = ["gcc","default","swarm","kconfig"]
for i in args: 
    print(i)
    main(i)
