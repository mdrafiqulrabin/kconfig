 
 
 
 

#include "../nop.h"

extern void abort (void);

volatile int z;

__attribute__((noinline, noclone)) int
foo (int x)
{
  z = 6;
  x++;
  x++;
  x++;
  x++;
  x++;
  x++;
  x++;
  x++;
  asm (NOP : : : "memory");
  asm (NOP : : : "memory");	 
  return x;
}

void
test_main (void)
{
  if (foo (20) != 28)
    abort ();
}

