 
 

#include <stdio.h>

int __attribute__((ms_abi)) va_demo (int count, ...);

int
main (void)
{
  printf ("sum == %d\n", va_demo (5, 1, 2, 3, 4, 5));
  return 0;
}

