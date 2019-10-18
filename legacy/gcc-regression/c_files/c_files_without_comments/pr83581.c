 
 
 

int a, b, c;

int
foo (int x)
{
  int *d = &x;
  while (a < 1)
    {
      for (b = 0; b < 2; ++b)
        {
          *d += !!x + 1;
          d = &c;
        }
      ++a;
    }
  return *d;
}

