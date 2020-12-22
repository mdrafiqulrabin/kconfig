library(readr, warn.conflicts=F)
library(dplyr, warn.conflicts=F)
library(ggplot2, warn.conflicts=F)

# Read CSV file
df_csv = read.csv("args_norm.csv")
n = nrow(df_csv)

# df with x-axis and y-axis
df_csv[,-2] = (df_csv[,-2] != 0) * 1
df_csv$i = NULL #ignore iterator
df_csv$cfile = NULL #ignore file name
df_csv$main = NULL # main should be enable always
xx = colnames(df_csv)
yy = sapply(df_csv, function(x){sum(as.numeric(x))}) 
df_plt = data.frame(xx, yy)

# Plot with ggplot
ggplot(data=df_plt, aes(x=xx, y=yy, group=1)) + 
  geom_bar(stat = "identity", width=0.5, fill = "grey") +
  geom_point(colour="blue", shape=3, size=0.5) +
  geom_text(aes(label=yy), hjust=+0.5, vjust=-0.5) +
  scale_y_continuous(expand = c(0, 0), limits = c(0, n), 
                     breaks = c(1, c(seq(500,3500,500)), n)) +
  xlab("Feature list") + ylab("Number of test inputs\n") +
  theme(panel.background = element_blank(), 
        panel.border = element_rect(color = "black", fill = NA, size=0.5),
        plot.title = element_text(hjust = 0.5),
        axis.text.x = element_text(angle = 90, hjust = 1)) 
