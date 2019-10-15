 
 
 
 

#include <altivec.h>

 

vector float
foo (vector float v1, vector float v2)
{
  return vec_insert (vec_extract (v2, 4), v1, 0);
}

 
 
 
 
 
 
 
 
 

