 
 
 
 
 
 

 
 

#include <altivec.h>

void vec_high_v2df (vector double *a, vector double *b, vector double *c)
{
  *a = vec_mergeh (*b, *c);
}

void vec_low_v2df (vector double *a, vector double *b, vector double *c)
{
  *a = vec_mergel (*b, *c);
}

void vec_high_v2di (vector long long *a, vector long long *b, vector long long *c)
{
  *a = vec_mergeh (*b, *c);
}

void vec_low_v2di (vector long long *a, vector long long *b, vector long long *c)
{
  *a = vec_mergel (*b, *c);
}

