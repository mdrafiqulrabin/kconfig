 

#include <limits.h>

int f(int i)
{
  i -= 2 * (INT_MAX + 1);
  return i;
}

