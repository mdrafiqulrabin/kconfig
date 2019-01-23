Code Info:

old_code/mw_csmith_args.sh:
* create tc -> for each gcc -> compile-all,output-all,diff-all 
* no count for crashbug and timeout

mw_csmith_args.sh: (new)
* create tc -> for each gcc -> (compile,output)-all,diff-all 
* count for crashbug and timeout

scripts/run/mw_csmith_args_r0.sh: (2h * 3)
* create tc -> single gcc (*4) -> (compile,output)-all,diff-all 
* count for crashbug and timeout
