// gcc_reg_stats_binary/gcc_reg_arg_stats_YX.tsv
Without: sizeInCharsC, sizeInCharsAST, max-array-len-per-dim
X -> Tese Cases and Y -> Attributes
Each column represents a candidate vector.

// gcc_reg_stats_binary/gcc_reg_arg_stats_XY.tsv
Without: sizeInCharsC, sizeInCharsAST, max-array-len-per-dim
X -> Attributes and Y -> Tese Cases
Each row represents a candidate vector.

TSV to CSV:
$ cat gcc_reg_arg_stats_YX.tsv | tr "\\t" "," > gcc_reg_arg_stats_YX.csv

CSV to TSV:
$ cat gcc_reg_arg_stats_XY.csv | tr "," "\\t" > gcc_reg_arg_stats_XY.tsv
