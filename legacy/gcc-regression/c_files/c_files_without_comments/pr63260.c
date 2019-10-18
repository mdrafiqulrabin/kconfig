 
 
 
 

float
test_0 (float x)
{
  return -x;
}

double
test_1 (double x)
{
  return -x;
}

float
test_2 (float x)
{
  return __builtin_fabs (x);
}

double
test_3 (double x)
{
  return __builtin_fabs (x);
}

