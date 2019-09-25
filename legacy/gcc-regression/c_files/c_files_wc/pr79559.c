 
 

void
foo (int x)
{
  __asm__ volatile ("# %K0" : : "r" (x));	 
  __asm__ volatile ("# %r0" : : "r" (x));	 
  __asm__ volatile ("# %r0" : : "n" (129));	 
  __asm__ volatile ("# %R0" : : "r" (x));	 
}

