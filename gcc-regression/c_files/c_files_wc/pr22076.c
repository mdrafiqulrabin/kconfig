 
 
 

#include <mmintrin.h>

__v8qi test ()
{
  __v8qi mm0 = {1,2,3,4,5,6,7,8};
  __v8qi mm1 = {11,22,33,44,55,66,77,88};
  volatile __m64 x;

  x = _mm_add_pi8 (mm0, mm1);

  return x;
}

 
 

