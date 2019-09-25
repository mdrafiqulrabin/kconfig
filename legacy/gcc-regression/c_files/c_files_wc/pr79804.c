 
 
 

void foo (void)
{
  register int r20 asm ("20");

  asm volatile ("# %0" : "=r"(r20));   
}   

