#!/bin/bash
gcc -c -w csmith_bug1.c &&\
! gcc -c -w -O3 csmith_bug1.c
