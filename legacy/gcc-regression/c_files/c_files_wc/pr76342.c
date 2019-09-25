 
 
 

#include <immintrin.h>

__m512i
test()
{
  return _mm512_undefined_epi32 ();
}

