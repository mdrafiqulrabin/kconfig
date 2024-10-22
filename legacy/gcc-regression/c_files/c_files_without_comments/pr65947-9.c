 

#include "tree-vect.h"

extern void abort (void) __attribute__ ((noreturn));

#define N 255

 

signed char __attribute__((noinline,noclone))
condition_reduction (signed char *a, signed char min_v)
{
  signed char last = -72;

  for (int i = 0; i < N; i++)
    if (a[i] < min_v)
      last = a[i];

  return last;
}

int
main ()
{
  signed char a[N] = {
  11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
  1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
  21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
  31, 32
  };
  __builtin_memset (a+32, 43, N-32);

  check_vect ();

  signed char ret = condition_reduction (a, 16);
  if (ret != 10)
    abort ();

  ret = condition_reduction (a, 1);
  if (ret != -72)
    abort ();

  return 0;
}

 
 
 
 
 

