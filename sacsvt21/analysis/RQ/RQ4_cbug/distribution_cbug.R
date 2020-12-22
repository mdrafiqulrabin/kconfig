library(reshape, warn.conflicts=F)
library(readr, warn.conflicts=F)
library(dplyr, warn.conflicts=F)
library(ggplot2, warn.conflicts=F)
library(reshape, warn.conflicts=F)

df = read.csv("cbug.csv")
df <- df[-c(2), ]

yn = max(df[,-1], na.rm=TRUE)
xn = ncol(df) - 1

# Plot with ggplot
dfm <- melt(df, id.vars=c("Type"))
ggplot(dfm, aes(x=as.numeric(variable), y=value, colour=Type)) + 
  geom_line(size = 0.7) +
  xlab("Index of centroids") + ylab("Number of failures\n") +
  scale_x_continuous(expand = c(0, 0), breaks = seq(0, xn, 5)) +
  scale_y_continuous(expand = c(0, 0), limits = c(0, yn+5),
                     breaks = seq(0, yn, 5)) +
  theme(panel.background = element_blank(), 
        panel.border = element_rect(color = "black", fill = NA, size=0.5),
        legend.position=c(0.99,0.9), legend.justification='right', legend.direction='vertical',
        plot.title = element_text(hjust = 0.5))
