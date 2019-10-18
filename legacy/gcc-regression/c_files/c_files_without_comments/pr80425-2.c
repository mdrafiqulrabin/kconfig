 
 

#include <x86intrin.h>

extern int a;

__m512i
f1 (__m512i x)
{
  return _mm512_srai_epi32 (x, a);
}

 

