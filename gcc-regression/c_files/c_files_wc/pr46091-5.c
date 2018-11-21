 
 

long test_1 (long x, int n)
{
  x &= ~((long)0x01 << n);

  return x;
}

 

long test_2 (long x, int n)
{
  x |= ((long)0x01 << n);

  return x;
}

 

long test_3 (long x, int n)
{
  x ^= ((long)0x01 << n);

  return x;
}

 

