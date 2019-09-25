 
 
 
 
 
 
 
 
 
 

int
test_00 (unsigned char x)
{
   
  return x & -129 ? -20 : -40;
}

int
test_01 (signed char x)
{
   
  return x & -129 ? -20 : -40;
}

int
test_02 (unsigned short x)
{
   
  return x & -129 ? -20 : -40;
}

int
test_03 (unsigned short* x)
{
   
  return x[0] & -129 ? -20 : -40;
}

int
test_04 (unsigned short x)
{
   
  return x & -129 ? x : -1;
}

int
test_05 (unsigned char* x)
{
   
  return x[0] & -129 ? -20 : -40;
}

