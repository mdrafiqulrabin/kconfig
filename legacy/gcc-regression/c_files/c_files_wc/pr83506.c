 
 
 

unsigned int
foo (unsigned int x, int y)
{
  while (y < 1)
    {
      x *= 3;
      ++y;
    }
  return x;
}

