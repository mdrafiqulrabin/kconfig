 
 
 
 

__attribute__ ((noinline))
int foo (int a, unsigned b)
{
  unsigned c = 1;
  if (b >= 1 && b <= ((unsigned)(-1) - 1))
    return 0;
  c = b >> 4;
  if (c == 268435455)
    ;
  else
    __builtin_abort ();
  return 0;
}

int main ()
{
  volatile unsigned b = (unsigned)(-1);
  foo (-1, b);
}

 
 
 

