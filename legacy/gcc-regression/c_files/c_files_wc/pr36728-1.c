 
 
 

#include "../nop.h"

int a, b;

int __attribute__((noinline))
foo (int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7)
{
  char *x = __builtin_alloca (arg7);
  int __attribute__ ((aligned(32))) y;

  y = 2;
  asm (NOP : "=m" (y), "=m" (b) : "m" (y));
  x[0] = 25;
  asm (NOP : "=m" (x[0]), "=m" (a) : "m" (x[0]), "m" (b));
  return y;
}

 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

int
main ()
{
  int l = 0;
  asm ("" : "=r" (l) : "0" (l));
  a = foo (l + 1, l + 2, l + 3, l + 4, l + 5, l + 6, l + 30);
  asm volatile ("" :: "r" (l));
  return 0;
}

