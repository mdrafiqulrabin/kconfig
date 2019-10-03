setwd("~/Desktop/kconfig/current/data_visualization/")

library(readr, warn.conflicts=F)
library(dplyr, warn.conflicts=F)
library(ggplot2, warn.conflicts=F)

# List of CSV files
mpath = "../compute_centroids/data/"
csv_files = list.files(path=mpath, pattern="*.csv$")
csv_files = paste0(mpath, csv_files)

# rbind CSV files
df_csv = lapply(csv_files, read.csv) %>% bind_rows()
n = nrow(df_csv)

# df with x-axis and y-axis
xx = colnames(df_csv)
yy = sapply(df_csv, function(x){sum(as.numeric(x))}) 
df_plt = data.frame(xx, yy)

# Plot with ggplot
ggplot(data=df_plt, aes(x=xx, y=yy, group=1)) + 
  geom_point(colour="blue", shape=3, size=0.5) +
  geom_text(aes(label=yy), hjust=+0.5, vjust=-0.5) +
  scale_y_continuous(limits = c(0, n), breaks = c(1, c(seq(5,30,5)), n)) +
  xlab("Features list") + ylab("Number of centroids\n") +
  theme(panel.background = element_blank(), 
        panel.border = element_rect(color = "black", fill = NA, size=0.5),
        plot.title = element_text(hjust = 0.5),
        axis.text.x = element_text(angle = 90, hjust = 1)) 
