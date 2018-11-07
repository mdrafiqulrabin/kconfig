#!/bin/bash
gcc -c csmith_bug1.c &&\
! gcc -c -O3 csmith_bug1.c
