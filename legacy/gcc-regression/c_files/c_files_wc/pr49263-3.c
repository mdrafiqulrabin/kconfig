 
 
 
 

 
 
 
 
 
 

 
 
 

int
test_00 (unsigned char* x, int y, int z)
{
   
  return (x[0] << 4) & 192 ? y : z;
}

int
test_01 (unsigned char* x, int y, int z)
{
   
  return (x[0] << 3) & 192 ? y : z;
}

int
test_02 (unsigned char* x, int y, int z)
{
   
  return ((x[0] << 3) & 192) != 0;
}

int
test_03 (unsigned char* x, int y, int z)
{
   
  return ((x[0] << 3) & 192) == 0;
}

int
test_04 (unsigned char x, int y, int z)
{
   
  return (x << 3) & 192 ? y : z;
}

int
test_05 (unsigned char x, int y, int z)
{
   
  return ((x << 3) & 192) != 0;
}

int
test_06 (unsigned char x, int y, int z)
{
   
  return ((x << 3) & 192) == 0;
}

int
test_07 (unsigned char x, int y, int z)
{
   
  return (x << 3) & 111 ? y : z;
}

int
test_08 (unsigned char x, int y, int z)
{
   
  return ((x << 3) & 111) != 0;
}

int
test_09 (unsigned char x, int y, int z)
{
   
  return ((x << 3) & 111) == 0;
}

int
test_10 (unsigned char x, int y, int z)
{
   
  return (x << 3) & -111 ? y : z;
}

int
test_11 (unsigned char x, int y, int z)
{
   
  return ((x << 3) & -111) != 0;
}

int
test_12 (unsigned char x, int y, int z)
{
   
  return ((x << 3) & -111) == 0;
}

int
test_13 (unsigned char* x, int y, int z)
{
   
  return (x[0] >> 2) & 16 ? y : z;
}

int
test_14 (unsigned char* x, int y, int z)
{
   
  return ((x[0] >> 2) & 16) != 0;
}
int
test_15 (unsigned char* x, int y, int z)
{
   
  return ((x[0] >> 2) & 16) == 0;
}

int
test_16 (unsigned char x, int y, int z)
{
   
  return (x >> 2) & 16 ? y : z;
}

int
test_17 (unsigned char x, int y, int z)
{
   
  return ((x >> 2) & 16) != 0;
}

int
test_18 (unsigned char x, int y, int z)
{
   
  return ((x >> 2) & 16) == 0;
}

int
test_19 (signed char x, int y, int z)
{
   
  return (x << 1) & 0x0F ? y : z;
}

int
test_20 (signed char x, int y, int z)
{
   
  return ((x << 1) & 0x0F) != 0;
}

int
test_21 (signed char x, int y, int z)
{
   
  return ((x << 1) & 0x0F) == 0;
}

int
test_22 (unsigned char* x, int y, int z)
{
   
  return (x[0] >> 2) ? y : z;
}

