 
 
 

#include <emmintrin.h>

void
func (__m128i * foo, size_t a, size_t b, int *dst)
{
  __m128i x = foo[a];
  __m128i y = foo[b];
  __m128i sum = _mm_add_epi32 (x, y);
  *dst = _mm_cvtsi128_si32 (sum);
}

 

