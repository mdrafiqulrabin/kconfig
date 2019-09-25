 
 
 
 
 
 
 
 
 

int
test_00 (unsigned char* x, char* xx, int y, int z)
{
   
  int b = x[0];
  xx[0] = b;
  return b ? y : z;
}

int
test_01 (unsigned char a, unsigned char b, int c, int d)
{
   
  if (a == b)
    return c;
  return d;
}

int
test_02 (unsigned char* a, unsigned char* b, int c, int d)
{
   
  if (*a != 0 && *b == 0)
    return c;
  return d;
}

int
test_03 (unsigned char* a)
{
   
  return *a == 0;
}

int
test_04 (unsigned short* a)
{
   
  return *a == 0;
}

unsigned char test_05_var;
int
test_05 (int a, int b, int c, int d)
{
   
  test_05_var = (a == b) | (b == c);
  if (test_05_var)
    return d;

  return 0;
}

