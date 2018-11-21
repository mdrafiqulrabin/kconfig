 
 
 
 

int
f (float x)
{
  int a, b;
  a = __builtin_log (2.f);
  b = __builtin_lrint (x);
  return (a + b);
}

