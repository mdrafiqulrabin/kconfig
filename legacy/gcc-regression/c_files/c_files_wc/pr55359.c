 
 

#include <x86intrin.h>

__m128d
f (__m256d x)
{
  return *((__m128d*) ((double *) &x + 1));
}

