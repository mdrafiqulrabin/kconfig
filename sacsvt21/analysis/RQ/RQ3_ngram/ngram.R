library(readr, warn.conflicts=F)
library(ggplot2)

# Dataset
df = read.csv("ngram.csv")
n_gram <- c(rep("n=1",4), rep("n=2",4), rep("n=3",4), rep("n=4",4), rep("n=5",4))
suite <- rep(c("regression", "default", "kconfig", "swarm") , 5)
Entropy <- c(6.8684,7.0231,7.0479,7.0634,4.7907,4.7949,5.1679,5.2118,3.8854,3.9296,4.4902,4.5404,3.4923,3.6081,4.3111,4.3717,3.3033,3.4512,4.2466,4.3161)
data <- data.frame(n_gram, suite, Entropy)

# N-Gram
p <- ggplot(data, aes(fill=reorder(suite, Entropy), y=Entropy, x=n_gram))
p <- p + geom_bar(position="dodge", stat="identity")
p <- p + scale_y_continuous(expand = c(0, 0), breaks = seq(0,8,1),limits = c(0,8))
p <- p + scale_x_discrete(expand = c(0, 0))
p$labels$fill <- "Test Suite"
p <- p + theme(panel.border = element_rect(colour = "black", fill=NA, size=1))
p
