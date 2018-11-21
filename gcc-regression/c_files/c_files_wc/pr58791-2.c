 
 
 

#include "../nop.h"

__attribute__((noinline, noclone)) int
foo (unsigned char c)
{
  int ret;
  _Bool a, b, d, e, f;

  a = c == 34;
  b = c == 32;
  d = a | b;
  f = !d;
  if (d)
    ret = 1;
  else
    {
      e = c <= 31;
      ret = e;
    }

  asm volatile (NOP : : : "memory");      
  asm volatile (NOP : : : "memory");      
  return ret;
}


int
main ()
{
  foo (32);
  return 0;
}

