 
 
 

extern int abs (int);

int
foo (int v)
{
  register int i asm ("r0");
  register int j asm ("r1");
  if (v > 1)
    i = abs (j);

  return i;
}


