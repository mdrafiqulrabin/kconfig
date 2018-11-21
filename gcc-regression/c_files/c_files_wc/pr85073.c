 
 
 

int
foo (unsigned x)
{
  int c = 0;
  while (x)
    {
      c += 1;
      x = (x - 1) & x;
    }

  return c;
}

 

