 
 

int
f (void)
{
  register unsigned int r asm ("cc");  
  return r;
}

