 
 
 

void
foo (double x, unsigned char y)
{
  while ((int) x < 1)
    {
      float a;

      a = y | 0x100;
      y = 0;
      x = a;
    }
}

