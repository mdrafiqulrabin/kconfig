 
 
 
 

#include <altivec.h>

 

#if __LITTLE_ENDIAN__
#define ELE 2
#else
#define ELE 1
#endif

vector float
foo (vector float v1, vector float v2)
{
  return vec_insert (vec_extract (v2, ELE), v1, 0);
}

 
 
 
 
 
 
 
 
 

