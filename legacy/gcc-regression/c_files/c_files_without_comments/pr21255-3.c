 
 
 
 
double
f ()
{
  double r;

  asm ("mov %S1,%S0; mov %R1,%R0" : "=r" (r) : "i" (20));
  asm ("mov %S1,%S0; mov %R1,%R0" : "+r" (r) : "i" (20.));
  return r;
}

