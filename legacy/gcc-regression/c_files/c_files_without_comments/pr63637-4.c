 
 
 

int
foo (void)
{
  int a, b, c;
  asm ("# Magic instruction" : "=r" (a) : "r" (0) : "eax", "memory");
  asm ("# Magic instruction" : "=r" (b) : "r" (0) : "edx", "memory");
  asm ("# Magic instruction" : "=r" (c) : "r" (0) : "ecx", "memory");
  return a + b + c;
}

 

