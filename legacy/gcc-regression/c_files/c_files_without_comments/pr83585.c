 
 
 

int
foo (int x)
{
  int a, b;
  for (a = 0; a < 2; ++a)
    if (x != 0)
      {
        for (b = 0; b < 2; ++b)
          ;
        return 0;
      }

  return;
}

