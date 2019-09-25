 
 
 
 

void
foo (unsigned long *x, int *y)
{
  static unsigned long b[2] = { 0x0UL, 0x9908b0dfUL };
  int c;
  for (c = 0; c < 512; c++)
    x[c] = b[x[c] & 1UL];
}

