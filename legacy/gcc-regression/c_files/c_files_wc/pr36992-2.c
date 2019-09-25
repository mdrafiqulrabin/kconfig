 

#include <emmintrin.h>

__m128i
test (__m128i b)
{
  return _mm_move_epi64 (b);
}

 

