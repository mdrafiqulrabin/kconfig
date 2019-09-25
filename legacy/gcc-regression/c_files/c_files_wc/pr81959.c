 
 
 

 

#ifndef ARRAY_SIZE
#define ARRAY_SIZE 1024
#endif

void
convert_int_to_float128 (__float128 * __restrict__ p,
			 int * __restrict__ q)
{
  unsigned long i;

  for (i = 0; i < ARRAY_SIZE; i++)
    p[i] = (__float128)q[i];
}

 
 
 
 

