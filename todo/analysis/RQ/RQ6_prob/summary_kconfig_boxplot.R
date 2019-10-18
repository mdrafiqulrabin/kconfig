library(readr, warn.conflicts=F)
library(dplyr, warn.conflicts=F)
library(ggplot2, warn.conflicts=F)

# Read CSV file
fname="../../../data/args/args_centroids_134.csv"
df = read.csv(fname)
df$i = NULL
df$cfile = NULL
df$main = NULL

n = nrow(df)
par(mar=c(10, 5, 1, 1))
boxplot(df, las=2, use.cols = TRUE,
        ylab = "Centroids value")