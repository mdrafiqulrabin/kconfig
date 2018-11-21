 
 
 
 
 

int
test_00 (unsigned char* x)
{
   
  return x[0];
}

int
test_01 (unsigned short* x)
{
   
  return x[0];
}

int
test_02 (unsigned char* x)
{
   
  return x[1];
}

int
test_03 (unsigned char* x)
{
   
  return x[32];
}

int
test_04 (unsigned char* x)
{
   
  return x[9000];
}

int
test_05 (unsigned short* x)
{
   
  return x[9000];
}

int
test_06 (unsigned char* x, int i)
{
   
  return x[i];
}

int
test_07 (unsigned short* x, int i)
{
   
  return x[i];
}

int
test_08 (unsigned char* x, int c)
{
   
  int s = 0;
  int i;
  for (i = 0; i < c; ++i)
    s += x[i];
  return s;
}

void
test_09 (unsigned char* x, unsigned char* y)
{
   
  x[1] = y[1];
  x[2] = y[2];
}

void
test_10 (unsigned char* x, unsigned short* y)
{
   
  x[1] = y[1];
  x[2] = y[2];
}

int
test_11 (unsigned char* x, unsigned short* y)
{
   
  int yy = y[1];
  x[1] = yy;
  return yy;
}

