 
 
 
 
 
 

char*
test_func_00 (char* p, int* x)
{
  int r = 0;
  r += *p++;
  *x = r;
  return p;
}

short*
test_func_01 (short* p, int* x)
{
  int r = 0;
  r += *p++;
  *x = r;
  return p;
}

int*
test_func_02 (int* p, int* x)
{
  int r = 0;
  r += *p++;
  *x = r;
  return p;
}


