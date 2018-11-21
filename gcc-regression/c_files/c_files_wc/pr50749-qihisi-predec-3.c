 
 
 
 
 
 

char*
test_func_00 (char* p, int c, int x)
{
  do
  {
    *--p = (char)x;
  } while (--c);
  return p;
}

short*
test_func_01 (short* p, int c, int x)
{
  do
  {
    *--p = (short)x;
  } while (--c);
  return p;
}

int*
test_func_02 (int* p, int c, int x)
{
  do
  {
    *--p = x;
  } while (--c);
  return p;
}

