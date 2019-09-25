 
 
 
 
 
 

void
flt128_va (void *mem, __float128 d)
{ 
  __builtin_memcpy (mem, &d, sizeof (d));
}

