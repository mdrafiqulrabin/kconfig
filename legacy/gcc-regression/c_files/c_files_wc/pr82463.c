 
 

 

#include <vecintrin.h>

typedef __vector float v4sf;

v4sf
foo (v4sf a, v4sf b, v4sf c) {
  return vec_madd(a, b, c);
}

