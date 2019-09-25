 
 
 
 

#include "../nop.h"

union U { int a, b; };
volatile int z;

__attribute__((noinline, noclone)) int
foo (int fd, union U x)
{
  int result = x.a != 0;
  if (fd != 0)
    result = x.a == 0;
  asm (NOP : : : "memory");	   
  z = x.a;
  x.a = 6;
  asm (NOP : : : "memory");	   
  return result;
}

void
test_main (void)
{
  union U u = { .a = 4 };
  foo (0, u);
}

