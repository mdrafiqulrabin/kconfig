gcov-stats-all:
    - gcov status per c file
    - x axis contains gcov files
    - y axis contains line number of gcov file

    1 = This c file covered the y line of x gcov file
    0 = This c file didn't cover the y line of x gcov file

gcov-stats-single.tsv:
    - gcov status of all c file
    - x axis contains gcov files
    - y axis contains line number of gcov file

    1 = Atleast one c file covered the y line of x gcov file
    0 = No c file covered the y line of x gcov file

order_c_files.txt:
    - Order of c files in x axis of gcov-stats-single.tsv

order_gcov_files.txt:
    - Order of gcov files in x axis of gcov-stats-single.tsv
    - Order of gcov files in x axis of gcov-stats-all
