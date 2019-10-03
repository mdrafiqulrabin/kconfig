setwd("~/Desktop/kconfig/current/data_visualization/")

library(readr, warn.conflicts=F)
library(dplyr, warn.conflicts=F)
library(ggplot2, warn.conflicts=F)

# Read CSV file
df_csv = read.csv("../arg_stats/gcc_reg_arg_stats_binary.csv")
n = nrow(df_csv)

# df with x-axis and y-axis
xx = colnames(df_csv)
yy = sapply(df_csv, function(x){sum(as.numeric(x))}) 
df_plt = data.frame(xx, yy)

# Plot with ggplot
ggplot(data=df_plt, aes(x=xx, y=yy, group=1)) + 
  geom_point(colour="blue", shape=3, size=0.5) +
  geom_text(aes(label=yy), hjust=+0.5, vjust=-0.5) +
  scale_y_continuous(limits = c(0, n), breaks = c(1, c(seq(500,3500,500)), n)) +
  xlab("Features list") + ylab("Number of test cases\n") +
  theme(panel.background = element_blank(), 
        panel.border = element_rect(color = "black", fill = NA, size=0.5),
        plot.title = element_text(hjust = 0.5),
        axis.text.x = element_text(angle = 90, hjust = 1)) 
