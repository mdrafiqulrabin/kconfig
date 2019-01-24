Helping Shortcut:

find . -name ".DS_Store" -delete

cd /Users/mdrafiqulrabin/Desktop/GitHub/Doctoral-Research/differential_testing/maxwell_csmith/scripts/run/

fn=("v482" "v492" "v520" "v540"); for f in "${fn[@]}"; do mkdir $f; for i in {1..3}; do mkdir $f/$i; done; done

fn=("v482" "v492" "v520" "v540"); for f in "${fn[@]}"; do for i in {1..3}; do cp mw_csmith_args.sh $f/r$i/mw_csmith_args_r$i.sh; done; done

python /Users/mdrafiqulrabin/Desktop/GitHub/Doctoral-Research/differential_testing/maxwell_csmith/scripts/run/replace_args.py 

scp -r /Users/mdrafiqulrabin/Desktop/GitHub/Doctoral-Research/differential_testing/maxwell_csmith/scripts/run/* mrabin@cusco.hpcc.uh.edu:/home/mrabin/main/run/

fn=("v482" "v492" "v520" "v540"); for f in "${fn[@]}"; do for i in {1..3}; do cd "/home/mrabin/main/run/$f/r$i"; qsub mw_csmith_args_r$i.sh; done; done

fn=("v482" "v492" "v520" "v540"); for f in "${fn[@]}"; do for i in {1..3}; do cat /home/mrabin/main/run/$f/r$i/data_tc/WrongCode.txt; done; done

scp -r mrabin@cusco.hpcc.uh.edu:/home/mrabin/main/run/* /Users/mdrafiqulrabin/Desktop/GitHub/Doctoral-Research/differential_testing/maxwell_csmith/scripts/run/
