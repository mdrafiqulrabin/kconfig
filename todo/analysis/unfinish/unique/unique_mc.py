import pandas as pd
import numpy as np

vr = ['482','540','610','710','810','910','trunk']
ts = ["swarm","kconfig"]
rn = ['r1','r2','r3']
fl = "mc.txt"
root = "../../../data/gcc_n"

for r in rn:
    for t in ts:
        allmc = []
        for v in vr:
            fn = root+"/"+v+"/"+t+"/"+r+"/"+fl
            lines = []
            with open(fn) as f:
                lines = [line.rstrip('\n').split("-")[0].split("/")[-1] for line in f]
            allmc.append(lines)
            
        for idx,val in enumerate(allmc):
            tmc = allmc.copy()
            cmc = tmc.pop(idx)
            tmc = sum(tmc,[])
            umc = list(set(cmc) - set(tmc))
            print("run= ",r,", ts= ",t,", vr= ",vr[idx],": ",len(umc),"/",len(cmc),"->",umc,"\n")
        
        print("\n\n")
    print("\n\n\n")
