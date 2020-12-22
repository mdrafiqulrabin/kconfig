#!/usr/bin/python
import random

n_args = 32

cent = '"argc","arrays","bitfields","comma_operators","compound_assignment","consts","divs","embedded_assigns","pre_incr_operator","pre_decr_operator","post_incr_operator","post_decr_operator","unary_plus_operator","jumps","longlong","int8","uint8","float","math64","inline_function","muls","safe_math","packed_struct","paranoid","pointers","structs","unions","volatiles","volatile_pointers","const_pointers","global_variables","builtins"'
print(cent)

for _ in range(0,5960):
    cent=""
    for _ in range(1, n_args+1):
        if (len(cent)>0): cent = cent + ","
        cent = cent + str(random.randint(0,1))
    print(cent)
