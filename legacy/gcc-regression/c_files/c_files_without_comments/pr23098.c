 
 
 
 
 
 

double foo (float);

double
f1 (void)
{
  return foo (1.0);
}

double
f2 (void)
{
  return foo (0.0);
}

void
f3 (float *x, float t)
{
  *x = 0.0 + t;
}

