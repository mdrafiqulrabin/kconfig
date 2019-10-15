 
 

int
f (void)
{
  register unsigned int r[50] asm ("r1");  
  return r[1];
}

