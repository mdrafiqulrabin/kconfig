 
 

void
foo (void)
{
  int x;
  __asm __volatile ("mov $0,%e0" : "=r" (x));	 
}

