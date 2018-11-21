 
 
 
 
 
 

int
test_00 (const char* x, int a, int b, int c)
{
  if (x[a] == 92)
    return b;
  return c;
}

int
test_01 (const short* x, int a, int b, int c)
{
  if (x[a] == 92)
    return b;
  return c;
}

int
test_02 (const int* x, int a, int b, int c)
{
  if (x[a] == 92)
    return b;
  return c;
}

