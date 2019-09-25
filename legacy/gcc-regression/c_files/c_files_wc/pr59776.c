 
 
 

#include "../nop.h"

struct S { float f, g; };

__attribute__((noinline, noclone)) void
foo (struct S *p)
{
  struct S s1, s2;			 
  s1 = *p;				 
  s2 = s1;				 
  *(int *) &s2.f = 0;			 
  asm volatile (NOP : : : "memory");	 
  asm volatile (NOP : : : "memory");	 
  s2 = s1;				 
  asm volatile (NOP : : : "memory");	 
  asm volatile (NOP : : : "memory");
}

int
main ()
{
  struct S x = { 5.0f, 6.0f };
  foo (&x);
  return 0;
}

