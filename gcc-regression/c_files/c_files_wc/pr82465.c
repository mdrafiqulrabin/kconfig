 
 

 

typedef __vector double v2df;

#include <vecintrin.h>

v2df
foo (v2df a)
{
  return vec_sqrt(a);
}

