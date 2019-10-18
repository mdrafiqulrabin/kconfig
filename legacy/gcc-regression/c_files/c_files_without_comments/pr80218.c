 
 

#include <math.h>

void foo (float *);

void
f1 (float *x)
{
  x[0] = sqrtf (x[0]);
}

void
f2 (float *x)
{
  sqrtf (x[0]);
  foo (x);
}

void
f3 (float *x)
{
  acosf (x[0]);
  foo (x);
}

 

