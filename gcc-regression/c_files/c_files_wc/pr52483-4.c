 
 
 
 

float
test_00 (volatile float* x, unsigned int y)
{
  return x[y];
}

void
test_100 (volatile float* x, unsigned int y, float z)
{
  x[y] = z;
}

