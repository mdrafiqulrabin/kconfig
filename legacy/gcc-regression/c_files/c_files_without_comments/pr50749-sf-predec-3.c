 
 
 
 

float*
test_func_00 (float* p, int c, float x)
{
  do
  {
    *--p = x;
  } while (--c);
  return p;
}

