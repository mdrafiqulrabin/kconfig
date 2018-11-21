 
 
 

 
 
 

 
 

 
 

int
test_00 (int a, int b, int c, int d)
{
   
  return a + b + 1;
}

int
test_01 (int a, int b, int c, int d)
{
   
  return a + (c == d);
}

int
test_02 (int a, int b, int c, int d)
{
   
  return a - b - 1;
}

int
test_03 (int a, int b, int c, int d)
{
   
  return a - (c == d);
}

int
test_04 (int a, int b, int c, int d)
{
   
  return a + b + c + 1;
}

int
test_05 (int a, int b, int c, int d)
{
   
  return a - b - c - 1;
}

int
test_06 (int a, int b, int c, int d)
{
   
  return 0 - a - (b == c);
}

int
test_07 (int *vec)
{
   
  int z = vec[0];
  int vi = vec[1];
  int zi = vec[2];

  if (zi != 0 && z < -1)
    vi -= (((vi >> 7) & 0x01) << 1) - 1;

  return vi;
}

int
test_08 (int a)
{
   
  return (a << 1) + 1;
}

unsigned int
test_09 (unsigned int x)
{
   
  return x - (x != 0);
}

unsigned int
test_10 (unsigned int x)
{
   
  return x + (x == 0);
}

unsigned int
test_11 (unsigned int x)
{
   
  return x + (x != 0);
}


