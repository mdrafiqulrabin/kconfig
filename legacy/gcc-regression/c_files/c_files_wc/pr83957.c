 
 
 

void
foo (int *x, int y)
{
  if (y < 0)
    for (; y < 1; ++y)
      x = &y;
}

