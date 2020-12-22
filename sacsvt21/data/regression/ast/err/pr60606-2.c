 
 

int
f (void)
{
  register unsigned pc asm ("pc");  
  
  return pc > 0x12345678;
}

