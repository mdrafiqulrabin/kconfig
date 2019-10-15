 
 
 
 

#include "../nop.h"

extern void abort (void);

__attribute__((noinline, noclone)) int
foo (int x)
{
  asm ("");
  x++;
  asm ("");
  x++;
  asm ("");
  x++;
  asm ("");
  x++;
  asm ("");
  x++;
  asm ("");
  x++;
  asm ("");
  x++;
  asm ("");
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

