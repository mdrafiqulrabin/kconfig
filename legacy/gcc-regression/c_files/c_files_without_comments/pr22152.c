 
 
 

#include <mmintrin.h>

typedef __SIZE_TYPE__ size_t;

__m64
unsigned_add3 (const __m64 * a, const __m64 * b, size_t count)
{
  __m64 sum = { 0, 0 };

  if (count > 0)
    sum = _mm_add_si64 (a[count-1], b[count-1]);

  return sum;
}

 

