 

#include "tree-vect.h"

int
main (void)
{
  int i;
  long x[12] __attribute__((aligned(__BIGGEST_ALIGNMENT__)));

  check_vect ();

  x[0] = 1;
  for (i = 0; i < 12; i++)
    x[i] = i;

  if (x[0] != 0)
    abort ();

  return 0;
}

 


