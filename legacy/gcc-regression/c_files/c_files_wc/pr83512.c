 
 
 

int a;

void
foo (int *x)
{
  for (;;)
    {
      for (*x = 0; *x < 1; *x++)
	;
      ++a;
    }
}

