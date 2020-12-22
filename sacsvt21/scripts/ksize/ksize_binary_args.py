#!/usr/bin/python
import sys, random, math
import pandas as pd
import numpy as np

### params ###
OldVMax = 5960
args_csmith=[
    ["--argc","--no-argc"],
    ["--arrays","--no-arrays"],
    ["--bitfields","--no-bitfields"],
    ["--comma-operators","--no-comma-operators"],
    ["--compound-assignment","--no-compound-assignment"],
    ["--consts","--no-consts"],
    ["--divs","--no-divs"],
    ["--embedded-assigns","--no-embedded-assigns"],
    ["--pre-incr-operator","--no-pre-incr-operator"],
    ["--pre-decr-operator","--no-pre-decr-operator"],
    ["--post-incr-operator","--no-post-incr-operator"],
    ["--post-decr-operator","--no-post-decr-operator"],
    ["--unary-plus-operator","--no-unary-plus-operator"],
    ["--jumps","--no-jumps"],
    ["--longlong","--no-longlong"],
    ["--int8","--no-int8"],
    ["--uint8","--no-uint8"],
    ["--float","--no-float"],
    ["--math64","--no-math64"],
    ["--inline-function","--no-inline-function"],
    ["--muls","--no-muls"],
    ["--safe-math","--no-safe-math"],
    ["--packed-struct","--no-packed-struct"],
    ["--paranoid","--no-paranoid"],
    ["--pointers","--no-pointers"],
    ["--structs","--no-structs"],
    ["--unions","--no-unions"],
    ["--volatiles","--no-volatiles"],
    ["--volatile-pointers","--no-volatile-pointers"],
    ["--const-pointers","--no-const-pointers"],
    ["--global-variabless","--no-global-variables"],
    ["--builtins","--no-builtins"]
]
n_args = len(args_csmith)

### function ###
def getCSmithArgs(centroids):
    arg_list = ""
    centroids = centroids[:-1]
    for idx, val in enumerate(centroids):
        val = int(val)
        if random.uniform(0,1) <= val:
            val = 1 - int(val)
        arg_list += " " + args_csmith[idx][val]
    print (arg_list)

def getNewValue(OldValue, NewMax):
    NewValue = (((OldValue - 1) * (NewMax - 1)) / (OldVMax - 1)) + 1
    return math.floor(NewValue)

### main ###
fname = "centroids_ksize_binary.csv"
df_centroids = pd.read_csv(fname)
c = int(sys.argv[1]) - 1
#m = int(sys.argv[2]) # [0 ~ 10000]
m = 10000
ksize = list(df_centroids.ksize)
ksize = [getNewValue(x,m) for x in ksize]
ksize = list(np.cumsum(ksize))
c = c % ksize[-1]
c = next(x[0] for x in enumerate(ksize) if x[1] > c)
df_centroids = df_centroids.values.tolist()
c = [c-1 for c in df_centroids[c]] #enable: c=1 -> index=0
getCSmithArgs(c)
