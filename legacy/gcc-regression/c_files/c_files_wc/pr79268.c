 
 
 
 

 

 

#include <altivec.h>

vector pixel a;

vector pixel
pr79268 (vector pixel *x)
{
  vec_xst (a, 0, x);
  return vec_xl (0, x);
}

