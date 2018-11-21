 
 
 
 
 
 

int
test00 (char* a, char* b, int c, int d)
{
  if (*a & *b)
    return c;
  return d;
}

int
test01 (unsigned char* a, unsigned char* b, int c, int d)
{
  if (*a & *b)
    return c;
  return d;
}

int
test02 (short* a, short* b, int c, int d)
{
  if (*a & *b)
    return c;
  return d;
}

int
test03 (unsigned short* a, unsigned short* b, int c, int d)
{
  if (*a & *b)
    return c;
  return d;
}

int
test04 (char* a, short* b, int c, int d)
{
  if (*a & *b)
    return c;
  return d;
}

int
test05 (short* a, char* b, int c, int d)
{
  if (*a & *b)
    return c;
  return d;
}

int
test06 (int* a, char* b, int c, int d)
{
  if (*a & *b)
    return c;
  return d;
}

int
test07 (int* a, short* b, int c, int d)
{
  if (*a & *b)
    return c;
  return d;
}

