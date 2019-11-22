library(readr, warn.conflicts=F)
library(dplyr, warn.conflicts=F)
library(ggplot2, warn.conflicts=F)
library(reshape, warn.conflicts=F)

yn = 1
xn = 32

fname="../../data/args_centroids_134.csv"
df = read.csv(fname)

# Plot with ggplot
df = cbind(df, row_number = seq(1, nrow(df)))
dfm = melt(df, id = "row_number")
ggplot(dfm, aes(x=as.numeric(variable), y=value, group = row_number, color=row_number)) + 
  geom_line(size = 0.5) +
  xlab("Index of feature") + ylab("Centroids value\n") +
  scale_x_continuous(expand = c(0, 0), breaks = seq(1, xn, 1)) +
  scale_y_continuous(expand = c(0, 0), limits = c(0, yn),
                     breaks = seq(0, yn, 0.25)) +
  theme(panel.background = element_blank(), 
        legend.position = "none",
        panel.border = element_rect(color = "black", fill = NA, size=0.5),
        plot.title = element_text(hjust = 0.5)) 

#  