 
 
 

int test_1 (int x, int n)
{
  x &= ~(0x01 << n);

  return x;
}

 

int test_2 (int x, int n)
{
  x |= (0x01 << n);

  return x;
}

 

int test_3 (int x, int n)
{
  x ^= (0x01 << n);

  return x;
}

 

