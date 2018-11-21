 
 
 

#include <immintrin.h>

void foo(const __m128d from, __m256d *to)
{
  *to = _mm256_castpd128_pd256(from);
}

 
 
 
 

