 
 
 
 
 
 
 
 

int
test_000 (int* x, unsigned int c)
{
   
  int s = 0;
  unsigned int i;
  for (i = 0; i < c; ++i)
    s += ! (x[i] & 0x3000);
  return s;
}

int
test_001 (int* x, unsigned int c)
{
   
  int s = 0;
  unsigned int i;
  for (i = 0; i < c; ++i)
    s -= ! (x[i] & 0x3000);
  return s;
}

int
test_002 (int a, int b, int c)
{
   
  return ((a & b) != 0) - c;
}

int
test_003 (int a, int b, int c)
{
   
  return ((a & b) == 0) - c;
}

int
test_004 (int a, int b, int c)
{
   
  return c - ((a & b) != 0);
}

int
test_005 (int a, int b, int c)
{
   
  int x = a < 0;
  return c - (b + x);
}

int
test_006 (int a, int b, int c)
{
   
  int x = a > 0;
  int y = b + x;
  return y - c;
}

int
test_007 (int a, int b, int c)
{
   
  int x = a != 1;
  int y = b - x;
  return c + y;
}

int
test_008 (int a, int b, int c)
{
   
  int x = a > 1;
  int y = b - x;
  return c + y;
}

int
test_009 (int a, int b, int c, int d)
{
   
  return c - d - (a < 0 != b < 0);
}

