 
 

#include <complex.h>

typedef _Complex float COMPLEX_FLOAT;

__attribute__ ((noinline))
static float real_part(COMPLEX_FLOAT a)
{
  return *(float*)(&a);
}

__attribute__ ((noinline))
static float real_part_2(COMPLEX_FLOAT a)
{
  return ((float*)(&a))[0];
}

int main()
{
  COMPLEX_FLOAT f = 1.0f + _Complex_I;

  float r1 = real_part(f);
  float r2 = real_part_2(f);

  return r1 - r2;
}

 
 

