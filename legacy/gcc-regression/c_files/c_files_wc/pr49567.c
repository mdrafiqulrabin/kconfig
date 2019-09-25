 
 
 

#include <x86intrin.h>

__m128
foo (__m128i x)
{
  __m128i y;
  y = _mm_cvtepi16_epi32 (x);
  return _mm_cvtepi32_ps (y);
}

