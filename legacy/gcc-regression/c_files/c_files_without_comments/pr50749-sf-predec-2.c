 
 
 
 

float*
test_func_00 (float* p, float c)
{
  *--p = c;
  *--p = c;
  return p;
}

float*
test_func_01 (float* p, float c)
{
  *--p = c;
  *--p = c;
  *--p = c;
  return p;
}

