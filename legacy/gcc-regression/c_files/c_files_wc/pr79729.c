 
 

void
foo (int x)
{
  __asm__ volatile ("# %R0" : : "n" (129));	 
}

