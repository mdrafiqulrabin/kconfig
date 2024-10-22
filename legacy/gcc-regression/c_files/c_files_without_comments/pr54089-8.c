 
 
 
 

typedef char bool;

long long
test_00 (long long a)
{
  return a << 1;
}

unsigned int
test_01 (unsigned int a, int b, int c)
{
  bool r = b == c;
  return ((a << 1) | r);
}

unsigned int
test_02 (unsigned int a, int b, int c)
{
  bool r = b == c;
  return ((a << 2) | r);
}

unsigned int
test_03 (unsigned int a, int b, int c)
{
  bool r = b == c;
  return ((a << 3) | r);
}

unsigned int
test_04 (unsigned int a, int b, int c)
{
  bool r = b == c;
  return ((a << 4) | r);
}

unsigned int
test_05 (unsigned int a, int b, int c)
{
  bool r = b == c;
  return ((a << 5) | r);
}

unsigned int
test_06 (unsigned int a, int b, int c)
{
  bool r = b == c;
  return ((a << 6) | r);
}

unsigned int
test_07 (unsigned int a, int b, int c)
{
  bool r = b == c;
  return ((a << 7) | r);
}

unsigned int
test_08 (unsigned int a, int b, int c)
{
  bool r = b == c;
  return ((a << 8) | r);
}

unsigned int
test_09 (unsigned int a, int b, int c)
{
  bool r = b == c;
  return ((a << 31) | r);
}

unsigned int
test_10 (unsigned int a, int b)
{
   
  return (a << 1) | (b & 1);
}

unsigned int
test_11 (unsigned int a, int b)
{
   
  return (a << 2) | (b & 1);
}

unsigned int
test_12 (unsigned int a, int b)
{
   
  return (a << 3) | (b & 1);
}

unsigned int
test_13 (unsigned int a, int b)
{
   
  bool r = b < 0;
  return (a << 1) | r;
}

unsigned int
test_14 (unsigned int a, int b, int c)
{
  bool r = b != c;
  return ((a << 1) | r);
}

unsigned int
test_15 (unsigned int a, int b, int c)
{
  bool r = b != c;
  return ((a << 11) | r);
}

unsigned int
test_16 (unsigned int a, int b, int c)
{
  bool r = b != c;
  return ((a << 3) | r);
}

unsigned int
test_17 (unsigned int a, int b, int c)
{
  bool r = b != c;
  return ((a << 4) | r);
}

unsigned int
test_18 (unsigned int a, int b, int c)
{
  bool r = b != c;
  return ((a << 5) | r);
}

unsigned int
test_19 (unsigned int a, int b, int c)
{
  bool r = b != c;
  return ((a << 6) | r);
}

unsigned int
test_20 (unsigned int a, int b, int c)
{
  bool r = b != c;
  return ((a << 7) | r);
}

unsigned int
test_21 (unsigned int a, int b, int c)
{
  bool r = b != c;
  return ((a << 8) | r);
}

unsigned int
test_22 (unsigned int a, int b, int c)
{
  bool r = b != c;
  return ((a << 31) | r);
}

unsigned int
test_23 (unsigned int a, int b, int c)
{
   
  return (a >> 31) | (b << 13);
}

unsigned int
test_24 (unsigned int a, unsigned int b)
{
   
  return (a >> 31) | (b << 1);
}

unsigned int
test_25 (unsigned int a, unsigned int b)
{
   
  return (a >> 31) | (b << 3);
}

unsigned int
test_26 (unsigned int a, unsigned int b)
{
   
  return (b << 3) | (a >> 31);
}

unsigned int
test_27 (unsigned int a, unsigned int b)
{
   
  return (a << 1) | ((b >> 4) & 1);
}

