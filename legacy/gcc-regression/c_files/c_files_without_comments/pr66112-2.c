 
 
 

unsigned short int
foo (int a, int b)
{
  unsigned short int res;
  a &= 0xffff;
  b &= 0xffff;
  if (__builtin_mul_overflow (a, b, &res))
    res = 0x123;
  return res;
}

short int
bar (int a, int b)
{
  short int res;
  a = (short int) a;
  b = (short int) b;
  if (__builtin_mul_overflow (a, b, &res))
    res = 0x123;
  return res;
}

 
 
 

