 
 
 

#include <emmintrin.h>

__m128i var;

void
foo (void)
{
  __m128i zero = _mm_setzero_si128 ();
  var = _mm_xor_si128 (zero, var);
}

void
bar (void)
{
  __m128i zero = _mm_setzero_si128 ();
  var = _mm_or_si128 (var, zero);
}

 
 

