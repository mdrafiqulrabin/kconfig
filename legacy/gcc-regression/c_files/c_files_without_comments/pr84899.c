 
 
 

void
foo (int x)
{
  int a = 1 / x, b = 0;

  while ((a + b + 1) < x)
    b = __INT_MAX__;
}

