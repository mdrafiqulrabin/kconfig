 
 
 

 
 

 
 
 

 

int
test00 (int a, int b, int* x)
{
  return (a == b) ? 0x7FFFFFFF : 0x80000000;
}

int
test00_inv (int a, int b)
{
  return (a != b) ? 0x80000000 : 0x7FFFFFFF;
}

int
test01 (int a, int b)
{
  return (a >= b) ? 0x7FFFFFFF : 0x80000000;
}

int
test01_inv (int a, int b)
{
  return (a < b) ? 0x80000000 : 0x7FFFFFFF;
}

int
test02 (int a, int b)
{
  return (a > b) ? 0x7FFFFFFF : 0x80000000;
}

int
test02_inv (int a, int b)
{
  return (a <= b) ? 0x80000000 : 0x7FFFFFFF;
}

int
test03 (int a, int b)
{
  return ((a & b) == 0) ? 0x7FFFFFFF : 0x80000000;
}

int
test03_inv (int a, int b)
{
  return ((a & b) != 0) ? 0x80000000 : 0x7FFFFFFF;
}

int
test04 (int a)
{
  return ((a & 0x55) == 0) ? 0x7FFFFFFF : 0x80000000;
}

int
test04_inv (int a)
{
  return ((a & 0x55) != 0) ? 0x80000000 : 0x7FFFFFFF;
}

int
test05 (int a, int b)
{
   
  return a != b ? 0x7FFFFFFF : 0x80000000;
}

int
test06 (char a)
{
  return ((a & 0x03) == 0) ? 0x7FFFFFFF : 0x80000000;
}

int
test07 (char a)
{
  return ((a & 0x80) == 0) ? 0x7FFFFFFF : 0x80000000;
}

int
test08 (char a)
{
  return ((a & 1) == 0) ? 0x7FFFFFFF : 0x80000000;
}

int
test09 (int a)
{
   
  return a < 0 ? 0x7FFFFFFF : 0x80000000;
}

int
test10 (int a)
{
   
  return a >= 0 ? 0x7FFFFFFF : 0x80000000;
}

int
test11 (int a)
{
   
  return a > 0 ? 0x7FFFFFFF : 0x80000000;
}

int
test12 (int a)
{
   
  return a <= 0 ? 0x7FFFFFFF : 0x80000000;
}

