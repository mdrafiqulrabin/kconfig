 
 
 
 
 

void
test_0 (char* x, unsigned int y)
{
   
  x[0] &= 0xFE;
  x[1] = y & ~(1 << 1);
  x[2] &= 0xFE;
  x[65000] &= 0xFE;
}

unsigned int
test_1 (unsigned int x, unsigned int y)
{
   
  return x & ~(1 << y);
}

unsigned int
test_2 (unsigned int x)
{
   
  return x & ~(1 << 1);
}

void
test_3 (char* x, unsigned int y, unsigned int z)
{
   
  x[0] |= 0x10;
  x[1] = y | (1 << 1);
  x[2] |= 0x10;
  x[65000] |= 0x10;
  x[5] |= 1 << z;
}

unsigned int
test_4 (unsigned int x, unsigned int y)
{
   
  return x | (1 << y);
}

unsigned int
test_5 (unsigned int x)
{
   
  return x | (1 << 8);
}

void
test_6 (char* x, unsigned int y, unsigned int z)
{
   
  x[0] ^= 0x10;
  x[1] = y ^ (1 << 1);
  x[2] ^= 0x10;
  x[65000] ^= 0x10;
  x[5] ^= 1 << z;
}

unsigned int
test_7 (unsigned int x, unsigned int y)
{
   
  return x ^ (1 << y);
}

unsigned int
test_8 (unsigned int x)
{
   
  return x ^ (1 << 8);
}

