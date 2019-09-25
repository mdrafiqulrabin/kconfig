 
 
 
 
 

volatile char*
test_00 (volatile char* x)
{
  int xx = *x++;
  return x;
}

volatile short*
test_01 (volatile short* x)
{
  int xx = *x++;
  return x;
}

volatile int*
test_02 (volatile int* x)
{
  int xx = *x++;
  return x;
}

