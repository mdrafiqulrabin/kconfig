library(readr, warn.conflicts=F)
library(dplyr, warn.conflicts=F)

# Read 6h file
df_6h = read.csv("kconfig_6h_best.csv")
colnames(df_6h)
nrow(df_6h)

max((df_6h[df_6h$ST == "default",])$TC)
max((df_6h[df_6h$ST == "kconfig",])$TC)

max((df_6h[df_6h$ST == "default",])$TT)
max((df_6h[df_6h$ST == "kconfig",])$TT)

max((df_6h[df_6h$ST == "default",])$MC)
max((df_6h[df_6h$ST == "kconfig",])$MC)

# Read 10k file
df_10k = read.csv("kconfig_10k_best.csv")
colnames(df_10k)
nrow(df_10k)

max((df_10k[df_10k$ST == "default",])$TC)
max((df_10k[df_10k$ST == "kconfig",])$TC)

max((df_10k[df_10k$ST == "default",])$TT)
max((df_10k[df_10k$ST == "kconfig",])$TT)

max((df_10k[df_10k$ST == "default",])$MC)
max((df_10k[df_10k$ST == "kconfig",])$MC)
