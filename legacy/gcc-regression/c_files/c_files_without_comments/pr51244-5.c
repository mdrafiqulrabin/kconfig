 
 
 
 

int
test_00 (int a, int b, int* c, short* d, int x)
{
  *d = x != 0;
  *c = -1;

  if (x != 0)
    return a > 0;

  return 0;
}

unsigned char
test_01 (int x)
{
  if (x < 58 && x > 47)
    return 1;
  return 0;
}

char
test_02 (int x)
{
  if (x < 58 && x > 47)
    return 1;
  return 0;
}

unsigned short
test_03 (int x)
{
  if (x < 58 && x > 47)
    return 1;
  return 0;
}

short
test_04 (int x)
{
  if (x < 58 && x > 47)
    return 1;
  return 0;
}

