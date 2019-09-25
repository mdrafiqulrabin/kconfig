 
 
 
 
 
 
 
 

int
test_00 (char* x, char* y)
{
   
  return *x & *y ? -40 : 60;
}

int
test_01 (short* x, short* y)
{
   
  return *x & *y ? -40 : 60;
}

int
test_02 (char x, char y)
{
   
  return x & y ? -40 : 60;
}

int
test_03 (short x, short y)
{
   
  return x & y ? -40 : 60;
}

int
test_04 (char* x, unsigned char y)
{
   
  return *x & y ? -40 : 60;
}

int
test_05 (short* x, unsigned char y)
{
   
  return *x & y ? -40 : 60;
}

int
test_06 (short x, short* y, int z, int w)
{
   
  return x & y[0] ? z : w;
}

int
test_07 (char x, char* y, int z, int w)
{
   
  return x & y[0] ? z : w;
}

