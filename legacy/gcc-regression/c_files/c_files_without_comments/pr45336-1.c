 
 
 
 
 
 
 
 
 
 
 

#include <smmintrin.h>
unsigned int foo8(__m128i x) { return _mm_extract_epi8(x, 4); }
unsigned int foo16(__m128i x) { return _mm_extract_epi16(x, 3); }
unsigned int foo32(__m128i x) { return _mm_extract_epi32(x, 2); }

