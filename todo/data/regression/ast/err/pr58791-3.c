 
 
 

#include "../nop.h"

__attribute__((noinline, noclone)) unsigned
foo (unsigned a, unsigned b, unsigned c, unsigned d, unsigned e)
{
  unsigned f = b + c;		 
  unsigned g = a - f;		 
  unsigned h = d + e;		 
  unsigned i = g - h;		 
  unsigned j = f + 1;		 
  unsigned k = g + 1;		 
  unsigned l = h + 1;		 
  unsigned m = i + 1;		 
  asm volatile (NOP : : : "memory");
  asm volatile (NOP : : : "memory");
  return i;
}

int
main ()
{
  foo (29, 2, 3, 4, 5);
  return 0;
}

