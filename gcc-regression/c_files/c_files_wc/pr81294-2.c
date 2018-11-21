 
 
 

#include <x86intrin.h>

int main ()
{
  volatile unsigned char c;
  unsigned long long x;
  volatile unsigned long long y, sum_ref;

  c = 0;
  x = 1LL;
  y = 0LL;
  sum_ref = 0x0LL;

   
  c = _subborrow_u64 (c, y, x, &x);
   
  c = _subborrow_u64 (c, y, x, &x);
   

  if (x != sum_ref)
    __builtin_abort ();

  return 0;
}

