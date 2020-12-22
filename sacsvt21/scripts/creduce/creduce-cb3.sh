#!/bin/bash

tc="$env_var_tc"
vn="$env_var_vn"

ulimit -t 10

/project/alipour/rabin/bin/gcc$vn-bin/bin/gcc -I /project/alipour/rabin/bin/csmith230-bin/include/csmith-2.3.0 -w -msse4.2 $tc &&\
! /project/alipour/rabin/bin/gcc$vn-bin/bin/gcc -O3 -I /project/alipour/rabin/bin/csmith230-bin/include/csmith-2.3.0 -w -msse4.2 $tc
