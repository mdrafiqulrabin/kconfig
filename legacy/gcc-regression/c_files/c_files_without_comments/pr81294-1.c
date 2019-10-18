 
 
 

#include <x86intrin.h>

int
main ()
{
  volatile unsigned char c;
  unsigned int x;
  volatile unsigned int y, sum_ref;

  c = 0;
  x = 1;
  y = 0;
  sum_ref = 0x0;

   
  c = _subborrow_u32 (c, y, x, &x);
   
  c = _subborrow_u32 (c, y, x, &x);
   

  if (x != sum_ref)
    __builtin_abort ();

  return 0;
}

