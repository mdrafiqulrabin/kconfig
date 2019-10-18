 
 
 
double d;

double
f (void)
{
  double r;

 
  asm ("mov %S1,%S0; mov %R1,%R0" : "=&r" (r) : "m" (d));
  return r;
}

