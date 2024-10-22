 
 

#include "tree-vect.h"

extern void abort (void);

typedef __SIZE_TYPE__ size_t;

static double
compute(size_t n, double const * __restrict a, double const * __restrict b)
{
  double res = 0.0;
  size_t i;
  for (i = 0; i < n; ++i)
    res += a[i] + b[i];
  return res;
}

void init(double *, double *);

int
main()
{
  double ary1[1024];
  double ary2[1024];
  size_t i;

  check_vect ();

   
  for (i = 0; i < 1024; ++i)
    {
      ary1[i] = 1 / (double)(i + 1);
      ary2[i] = 1 + 1 / (double) (i + 1);
      __asm__ volatile ("" : : : "memory");
    }

   
  if ((int) compute (512, &ary1[0], &ary2[0]) != 525
      || (int) compute(512, &ary1[1], &ary2[1]) != 523)
    abort ();

  return 0;
}

 

 

