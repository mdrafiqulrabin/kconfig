 
 
 
 
 

int
test_00 (volatile char* x, unsigned int y)
{
  return x[y];
}

void
test_100 (volatile char* x, unsigned int y, char z)
{
  x[y] = z;
}

int
test_01 (volatile short* x, unsigned int y)
{
  return x[y];
}

void
test_101 (volatile short* x, unsigned int y, short z)
{
  x[y] = z;
}

int
test_02 (volatile int* x, unsigned int y)
{
  return x[y];
}

int
test_102 (volatile int* x, unsigned int y, int z)
{
  x[y] = z;
}

