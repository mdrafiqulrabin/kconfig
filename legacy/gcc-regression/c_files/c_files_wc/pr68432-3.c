 
 

float __attribute__ ((cold))
f1 (float f)
{
  return __builtin_rintf (f);
}

double __attribute__ ((cold))
f2 (double f)
{
  return __builtin_rint (f);
}

 
 

