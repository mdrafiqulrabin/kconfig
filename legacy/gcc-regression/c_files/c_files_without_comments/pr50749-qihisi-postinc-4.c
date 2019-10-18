 
 
 
 
 
 

int
test_func_00 (char* p, int c)
{
  int r = 0;
  do
  {
    r += *p++;
    r += *p++;
    r += *p++;
  } while (--c);
  return r;
}

int
test_func_01 (short* p, int c)
{
  int r = 0;
  do
  {
    r += *p++;
    r += *p++;
    r += *p++;
  } while (--c);
  return r;
}

int
test_func_02 (int* p, int c)
{
  int r = 0;
  do
  {
    r += *p++;
    r += *p++;
    r += *p++;
  } while (--c);
  return r;
}

