 
 
 
 
 
 

char*
test_func_00 (char* p, int c)
{
  *--p = (char)c;
  return p;
}

short*
test_func_01 (short* p, int c)
{
  *--p = (short)c;
  return p;
}

int*
test_func_02 (int* p, int c)
{
  *--p = c;
  return p;
}


