 
 

#include <mmintrin.h>

__m64 x;
__m64 y;

unsigned long long  foo(__m64 m) {
  return _mm_cvtm64_si64(_mm_add_pi32(x, y));
}

 
 

