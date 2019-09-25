 
 
 
 

float*
test_func_00 (float* p, float* x)
{
  float r = 0;
  r += *p++;
  r += *p++;
  *x = r;
  return p;
}

float*
test_func_01 (float* p, float* x)
{
  float r = 0;
  r += *p++;
  r += *p++;
  r += *p++;
  *x = r;
  return p;
}

