 
 
 

unsigned int
foo (long long a, long long b)
{
  unsigned int res;
  a &= ~0U;
  b &= ~0U;
  if (__builtin_mul_overflow (a, b, &res))
    res = 0x123U;
  return res;
}

 

