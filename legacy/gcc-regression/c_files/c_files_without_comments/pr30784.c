 

#include <stdarg.h>
#include "tree-vect.h"

long stack_vars_sorted[32];

int
main1 (long n)
{
  long si;

  for (si = 0; si < n; ++si)
    stack_vars_sorted[si] = si;
}

int main ()
{
  long si;

  check_vect ();
  main1 (32);

  for (si = 0; si < 32; ++si)
    if (stack_vars_sorted[si] != si)
      abort ();

  return 0;
}

