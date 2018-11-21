 
 
 

#include "../nop.h"

__attribute__((noinline, noclone)) unsigned int
foo (unsigned int a0, unsigned int a1, unsigned int a2,
     unsigned int a3, unsigned int a4)
{
  unsigned int b0, b1, b2, b3, b4, e;
   
  b4 = a4 + a3 + a2 + a1 + a0;		 
  b3 = a3 + a2 + a1 + a0;		 
  b2 = a2 + a1 + a0;			 
  b1 = a1 + a0;				 
   
  e = b4 - b3 + b2 - b1 - a4 - a2;	 
  asm volatile (NOP : : : "memory");
  asm volatile (NOP : : : "memory");
  return e;
}

int
main ()
{
  foo (1, 8, 64, 512, 4096);
  return 0;
}

