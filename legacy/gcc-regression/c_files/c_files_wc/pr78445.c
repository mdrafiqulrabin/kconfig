 
 
 
 

int a;

void
foo (int x, int *y)
{
  while (a != 0)
    if (x != 0)
      {
	*y = a;
	x = *y;
      }
    else
      x = a;
}

