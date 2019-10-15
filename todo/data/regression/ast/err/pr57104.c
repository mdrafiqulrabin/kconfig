 
 
 

register int r asm ("r14");
int v;

int
foo (void)
{
  return r + v;
}

