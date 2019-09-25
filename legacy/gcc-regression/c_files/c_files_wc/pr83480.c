 
 
 

signed char a, b;

void
foo (int x, int y)
{
  for (a = 1; a != 0; ++a)
    ;

  for (;;)
    {
      int c;

      b %= (y != 0 && a != 0) + 1;
      if (a != 0)
	y = b;

      for (c = 0; c < 50; ++c)
	++x;

      if (a < 1)
	{
	  while (x != 0)
	    ;

	  a /= 0;	 
	}
    }
}

