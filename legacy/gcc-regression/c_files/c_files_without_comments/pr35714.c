 
 

#include <emmintrin.h>

extern __m128i a;

__m128i madd (__m128i b)
{
  return _mm_madd_epi16(a, b);
}

__m128i madd_swapped (__m128i b)
{
    return _mm_madd_epi16(b, a);
}

 

