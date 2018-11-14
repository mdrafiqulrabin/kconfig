gcov_stats_all/*:
    - gcov status per c file
    - x axis contains gcov files
    - y axis contains line number of gcov file

    1 = This c file covered the y line of x gcov file
    0 = This c file didn't cover the y line of x gcov file

gcov_stats_single/gcov_stats_single_decimal.tsv:
    - gcov status of all c file
    - x axis contains gcov files
    - y axis contains line number of gcov file

    ? = Number of c files covered the y line of x gcov file
    0 = No c file covered the y line of x gcov file

gcov_stats_single/gcov_stats_single_vector_woz.tsv
    gcov_stats_single_decimal.tsv in single line without zero

order_c_files.txt:
    - Order of c files in x axis of gcov_stats_single_decimal.tsv

order_gcov_files.txt:
    - Order of gcov files in x axis of gcov_stats_single_decimal.tsv
    - Order of gcov files in x axis of gcov_stats_all

