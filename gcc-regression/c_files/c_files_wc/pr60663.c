 
 
 

int
foo (void)
{
  unsigned i, j;
  asm ("%0 %1" : "=r" (i), "=r" (j));
  return i;
}

