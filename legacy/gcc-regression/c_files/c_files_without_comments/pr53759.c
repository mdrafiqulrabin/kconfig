 
 
 

#include <xmmintrin.h>

void
foo (__m128 *x, __m64 *y)
{
  __m128 a = _mm_setzero_ps ();
  __m128 b = _mm_loadl_pi (a, y);
  *x = _mm_add_ps (b, b);
}

 
 

