 
 
 
 
 
 
 

static inline int
min (int a, int b)
{
  return a < b ? a : b;
}

static inline int
max (int a, int b)
{
  return a < b ? b : a;
}

int
test_00 (int a)
{
   
  return max (-128, min (127, a));
}

int
test_01 (int a)
{
   
  return min (127, max (-128, a));
}

int
test_02 (int a)
{
   
  return max (-32768, min (32767, a));
}

int
test_03 (int a)
{
   
  return min (32767, max (-32768, a));
}

unsigned int
test_04 (unsigned int a)
{
   
  return a > 255 ? 255 : a;
}

unsigned int
test_05 (unsigned int a)
{
   
  return a >= 255 ? 255 : a;
}

unsigned int
test_06 (unsigned int a)
{
   
  return a > 65535 ? 65535 : a;
}

unsigned int
test_07 (unsigned int a)
{
   
  return a >= 65535 ? 65535 : a;
}

void
test_08 (unsigned short a, unsigned short b, unsigned int* r)
{
   
  unsigned short x = a + b;
  if (x > 65535)
    x = 65535;
  *r = x;
}

