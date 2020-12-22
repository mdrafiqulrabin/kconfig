import pandas as pd
import numpy as np
from sklearn.preprocessing import MinMaxScaler

def summary_m(str, df):
    print("[ ", str, " ] :")
    print("df_columns = ", len(df.columns))
    print("df_rows = ", len(df.index))
    print("\n")

def filter_m():
    #read csv
    fname = "../../data/args/args_count.csv"
    df = pd.read_csv(fname)
    summary_m("raw csv", df)

    #remove zero rows
    df = df.loc[~(df==0).all(axis=1)]
    summary_m("remove zero rows", df)

    #remove zero cols
    df = df.loc[:, (df != 0).any(axis=0)]
    summary_m("remove zero cols", df)

    #save csv
    fname = "../../data/args/args_filter.csv"
    df.to_csv(fname, sep=',', encoding='utf-8', index=False)

def normalize_m():
    #read csv
    fname = "../../data/args/args_filter.csv"
    df = pd.read_csv(fname)
    summary_m("filter csv", df)

    #min-max normalize
    nclos = df.select_dtypes(include=[np.number]).columns.tolist()
    scaler = MinMaxScaler(feature_range=(0, 1))
    data = df[nclos]
    scaler.fit(data)
    data = pd.DataFrame(scaler.transform(data))
    df[nclos] = df[nclos].apply(lambda x: (x - x.min()) / (x.max() - x.min()))
    summary_m("min-max normalize", df)

    #save csv
    fname = "../../data/args/args_norm.csv"
    df.to_csv(fname, sep=',', encoding='utf-8', index=False)

def main():
    filter_m()
    normalize_m()

main()
