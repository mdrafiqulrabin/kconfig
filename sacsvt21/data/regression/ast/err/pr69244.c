 
 
 

#include "../nop.h"

union U { float f; int i; };
float a, b;

__attribute__((noinline, noclone)) void
foo (void)
{
  asm volatile ("" : : "g" (&a), "g" (&b) : "memory");
}

int
main ()
{
  float e = a;
  foo ();
  float d = e;
  union U p;
  p.f = d += 2;
  int c = p.i - 4;
  asm (NOP : : : "memory");
  b = c;
  return 0;
}

 

