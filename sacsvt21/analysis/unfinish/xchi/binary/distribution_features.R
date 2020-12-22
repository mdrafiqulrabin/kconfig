library(readr, warn.conflicts=F)
library(dplyr, warn.conflicts=F)
library(ggplot2, warn.conflicts=F)
library(reshape, warn.conflicts=F)

yn = 5960
xn = 32

get_df_all <- function(str_type) {
  fname = paste0("args_" , str_type , ".csv")
  df = read.csv(fname)
  df$i = NULL
  df$cfile = NULL
  df$main = NULL
  df[df > 0] <- 1
  df = cbind(settings = str_type, df)
  return (df)
}

get_df_sum <- function(str_type) {
  fname = paste0("args_" , str_type , ".csv")
  df = read.csv(fname)
  df$i = NULL
  df$cfile = NULL
  df$main = NULL
  df[df > 0] <- 1
  df = data.frame(t(colSums(df)))
  df = cbind(settings = str_type, df)
  return (df)
}

df_sum = Reduce(function(x, y) merge(x, y, all=TRUE), 
                list(
                  get_df_sum("regression"), 
                  get_df_sum("default"), 
                  get_df_sum("swarm"), 
                  get_df_sum("kconfig")
                )
          )

df_all = Reduce(function(x, y) merge(x, y, all=TRUE), 
                list(
                  get_df_all("regression"), 
                  get_df_all("default"), 
                  get_df_all("swarm"), 
                  get_df_all("kconfig")
                )
          )

# Plot with ggplot
dfm <- melt(df_sum, id.vars=c("settings"))
ggplot(dfm, aes(x=as.numeric(variable), y=value, colour=settings)) + 
  geom_line(size = 0.7) +
  xlab("Index of feature") + ylab("Number of test inputs\n") +
  scale_x_continuous(expand = c(0, 0), breaks = seq(1, xn, 1)) +
  scale_y_continuous(expand = c(0, 0), limits = c(0, yn+1000),
                     breaks = seq(0, yn+1000, 1000)) +
  theme(panel.background = element_blank(), 
        panel.border = element_rect(color = "black", fill = NA, size=0.5),
        plot.title = element_text(hjust = 0.5)) 
