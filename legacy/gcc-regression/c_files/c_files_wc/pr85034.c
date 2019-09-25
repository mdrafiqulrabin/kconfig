 
 
 

void
foo (void)
{
  volatile float a;
  struct S { char a; } b = { 0 };
  asm volatile ("" : "=r" (a) : "0ir" (b));
}

