 
 

int
f (void)
{
  register unsigned int r asm ("no-such-register");  
  return r;
}

