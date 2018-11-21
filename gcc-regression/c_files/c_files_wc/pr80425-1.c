 
 
 

#include <x86intrin.h>

__m512i
f1 (__m512i x, int a)
{
  return _mm512_srai_epi32 (x, a);
}

 

