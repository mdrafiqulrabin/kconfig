 

#include <stdarg.h>
#include "tree-vect.h"

#define N 16

__attribute__ ((noinline)) int main1 (short a, short *b)
{
  while (++a < 4) *b++ = 2;

  return 0;
}

int main (void)
{
  int i = 0;
  short x[N];

  check_vect ();

  main1 (0, x);

   
  while (++i < 4)
    {
      if (x[i-1] != 2)
        abort ();
    }

  return 0;
}

 

