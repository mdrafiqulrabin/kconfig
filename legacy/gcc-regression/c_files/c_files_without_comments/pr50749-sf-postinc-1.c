 
 
 
 

float*
test_func_00 (float* p, float* x)
{
  float r = 0;
  r += *p++;
  *x = r;
  return p;
}

