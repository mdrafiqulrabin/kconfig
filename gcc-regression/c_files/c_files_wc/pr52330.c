 
 

void foo (int a)
{
  asm volatile ("# %H0" : : "r" (a));   
}

