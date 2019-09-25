 
 
 

int
foo (void)
{
  int a, b, c;
  asm ("# Magic instruction" : "=r" (a) : : "eax", "memory");
  asm ("# Magic instruction" : "=r" (b) : : "edx", "memory");
  asm ("# Magic instruction" : "=r" (c) : : "ecx", "memory");
  return a + b + c;
}

 

