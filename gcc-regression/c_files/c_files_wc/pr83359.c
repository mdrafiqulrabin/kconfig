 
 
 

int a, b, c;

void
foo (int x, int y)
{
  int *d = &a;
  int *e = &x;

  for (a = 0; a < 1; ++a)
    d = &x;

  while (b < 10)
    {
      for (b = 0; b < 1; ++b)
        if (x == 0)
          while (x < 1)
            ++x;
        else
          while (x < 1)
            {
              d = &y;
              ++x;
            }
      ++b;
    }

  for (;;)
    for (c = 0; c < 2; ++c)
      {
        if (*d != 0)
          a = *e;

        e = &b;
        y = 0;
      }
}

