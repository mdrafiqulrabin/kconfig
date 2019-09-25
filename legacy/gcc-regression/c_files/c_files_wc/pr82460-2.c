 
 
 
 
 
 

void
foo (unsigned char *__restrict__ x, const unsigned short *__restrict__ y,
     unsigned long z)
{
  unsigned char *w = x + z;
  do
    *x++ = *y++ >> 8;
  while (x < w);
}

