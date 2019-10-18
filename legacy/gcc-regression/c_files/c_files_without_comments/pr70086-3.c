 
 
 

float
foo (double *p)
{
  register float xmm16 __asm ("xmm16");
  xmm16 = *p;
  asm volatile ("" : "+v" (xmm16));
  return xmm16;
}

float
bar (double x)
{
  register float xmm16 __asm ("xmm16");
  xmm16 = x;
  asm volatile ("" : "+v" (xmm16));
  return xmm16;
}

