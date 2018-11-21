 
 
 
 
 
 

char*
test_func_00 (char* p, int* x)
{
  int r = 0;
  r += *p++;
  r += *p++;
  *x = r;
  return p;
}

char*
test_func_01 (char* p, int* x)
{
  int r = 0;
  r += *p++;
  r += *p++;
  r += *p++;
  *x = r;
  return p;
}

short*
test_func_02 (short* p, int* x)
{
  int r = 0;
  r += *p++;
  r += *p++;
  *x = r;
  return p;
}

short*
test_func_03 (short* p, int* x)
{
  int r = 0;
  r += *p++;
  r += *p++;
  r += *p++;
  *x = r;
  return p;
}

int*
test_func_04 (int* p, int* x)
{
  int r = 0;
  r += *p++;
  r += *p++;
  *x = r;
  return p;
}

int*
test_func_05 (int* p, int* x)
{
  int r = 0;
  r += *p++;
  r += *p++;
  r += *p++;
  *x = r;
  return p;
}

