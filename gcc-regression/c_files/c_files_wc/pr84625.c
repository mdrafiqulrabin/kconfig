 
 
 

typedef int V __attribute__((vector_size (16)));

void
foo (void)
{
  asm volatile ("# %0" : : "X" ((V) { 1, 2, 3, 4 }));	 
  asm volatile ("# %0" : : "" ((V) { 2, 3, 4, 5 }));	 
}

