 
 
 

#include "../nop.h"

static inline void
f1 (int x, int y)
{
  asm volatile (NOP);	 
  asm volatile (NOP);	 
}

static inline void
f2 (int z)
{
  f1 (z, 0);
  f1 (z, 1);
}

int
main ()
{
  f2 (2);
  f2 (3);
  return 0;
}

