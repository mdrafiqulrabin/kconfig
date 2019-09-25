 

 
 
 

void
f (unsigned int a)
{
  if (a >> 4)
    asm volatile ("nop");
  asm volatile ("nop");
}

