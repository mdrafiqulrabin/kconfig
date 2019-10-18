 
 
 
 
 
 
 

int
test_00 (unsigned int a)
{
  return !(a > 0x7FFFFFFF);
}

int
test_01 (unsigned int a)
{
  return !(a > 0x7FFFFFFF) ? -5 : 10;
}

int
test_02 (unsigned int a)
{
   
  return a >= 0x80000000;
}

int
test_03 (unsigned int a)
{
  return a >= 0x80000000 ? -5 : 10;
}

int
test_04 (unsigned int a)
{
  return a <= 0x7FFFFFFF;
}

int
test_05 (unsigned int a)
{
  return a <= 0x7FFFFFFF ? -5 : 10;
}

int
test_06 (unsigned int a)
{
  return a < 0x80000000;
}

int
test_07 (unsigned int a)
{
  return a < 0x80000000 ? -5 : 10;
}

