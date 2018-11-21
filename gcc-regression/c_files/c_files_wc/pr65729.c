 
 
 

int foo (void)
{
  double x = 0.0;
  asm volatile ("" : "+gw" (x));
  return x;
}

