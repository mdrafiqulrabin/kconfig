#!/bin/sh

import csv

# Run: $python3 get_csmith_args.py > data/csmith_args.txt

### params ###
#ignore: --global-variables (enable by default), --nomain (-c not executable), max_ary_dim (?), int16-64 (N/A)
args_csmith=[
    ["--comma-operators","--no-comma-operators"],
    ["--argc","--no-argc"],
    ["--bitfields","--no-bitfields"],
    ["--arrays","--no-arrays"],
    ["--pointers","--no-pointers"],
    ["--structs","--no-structs"],
    ["--unions","--no-unions"],
    ["--packed-struct","--no-packed-struct"],
    ["--divs","--no-divs"],
    ["--muls","--no-muls"],
    ["--pre-incr-operator","--no-pre-incr-operator"],
    ["--pre-decr-operator","--no-pre-decr-operator"],
    ["--post-incr-operator","--no-post-incr-operator"],
    ["--post-decr-operator","--no-post-decr-operator"],
    ["--unary-plus-operator","--no-unary-plus-operator"],
    ["--longlong","--no-longlong"],
    ["--float","--no-float"],
    ["--jumps","--no-jumps"],
    ["--volatiles","--no-volatiles"],
    ["--compound-assignment","--no-compound-assignment"],
    ["--consts","--no-consts"],
    ["--inline-function","--no-inline-function"],
    ["--volatile-pointers","--no-volatile-pointers"],
    ["--const-pointers","--no-const-pointers"],
    ["   ","--no-global-variables"],
    ["--builtins","--no-builtins"],
    ["--int8","--no-int8"],
    ["--uint8","--no-uint8"]
]

### function ###

def dump_csmith_args(centroids):
    for c in centroids:
        arg_list = ""
        for idx, val in enumerate(c):
            val = 1 - int(val) #ignore for reverse centroids
            arg_list += " " + args_csmith[idx][val]
        print (arg_list)
        print ()

### main ###

no_of_clusters = [1, 2, 4, 8, 16]
for nc in no_of_clusters:
    print(); print("no_of_clusters = ", nc); print()
    fn = "data/kmeans_centroids_binary_" + str(nc) + ".csv"
    with open(fn, "r") as fin:
        centroids = list(csv.reader(fin))
        #print(centroids)
        dump_csmith_args(centroids)
    print()
