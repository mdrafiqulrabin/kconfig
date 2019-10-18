 
 
 
 
 

#include <x86intrin.h>

register __m256d a asm ("ymm16");
__m128d b;

void
foo ()
{
  b = _mm256_extractf128_pd (a, 1);
}

