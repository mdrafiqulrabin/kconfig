 
 
 
 

float
test_func_00 (float* p, int c)
{
  float r = 0;
  do
  {
    r += *p++;
    r += *p++;
    r += *p++;
  } while (--c);
  return r;
}

