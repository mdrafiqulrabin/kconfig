 
 
 
 
 
 

#include <emmintrin.h>

extern int foo (__m128, __m128, __m128, __m128);

int bar (__m128 x1, __m128 x2, __m128 x3, __m128 x4)
{
    return foo (x1, x2, x3, x4);
}

