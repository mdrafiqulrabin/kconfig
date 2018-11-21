 
 
 
 
 
double
f (double d)
{
  double r;

#if defined (__SH_FPU_DOUBLE__)
  asm ("mov %S1,%S0; mov %R1,%R0" : "=f" (r) : "f" (d));
#else
  asm ("mov fr4,fr4; mov fr5,fr5");
#endif
  return r;
}

