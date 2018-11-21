 
 
 

int
foo (void)
{
  int a, b, c;
  asm ("# Magic instruction" : "=r" (a) : : "eax");
  asm ("# Magic instruction" : "=r" (b) : : "edx");
  asm ("# Magic instruction" : "=r" (c) : : "ecx");
  return a + b + c;
}

 

