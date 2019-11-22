setwd("/Users/mdrafiqulrabin/Projects/GCC/Review_Kconfig/analysis/summary")

library(readr, warn.conflicts=F)
library(dplyr, warn.conflicts=F)

fname="args_centroids_134.csv"
df = read.csv(fname)

xcm = colMeans(df, na.rm = TRUE)
xrm = rowMeans(df, na.rm = TRUE)

# column wise summary
summary(df)

# row wise summary
tcol <- sprintf("C%s",seq(1:134))
df <- as.data.frame(t(df))
colnames(df) <- tcol
summary(df)


