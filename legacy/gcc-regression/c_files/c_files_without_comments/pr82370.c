 
 
 
 
 
 
 
 
 

#include <x86intrin.h>

__m512i f1 (__m512i *x) { return _mm512_bslli_epi128 (*x, 5); }
__m512i f2 (__m512i *x) { return _mm512_bsrli_epi128 (*x, 5); }
__m256i f3 (__m256i *x) { return _mm256_bslli_epi128 (*x, 5); }
__m256i f4 (__m256i *x) { return _mm256_bsrli_epi128 (*x, 5); }
__m128i f5 (__m128i *x) { return _mm_bslli_si128 (*x, 5); }
__m128i f6 (__m128i *x) { return _mm_bsrli_si128 (*x, 5); }

