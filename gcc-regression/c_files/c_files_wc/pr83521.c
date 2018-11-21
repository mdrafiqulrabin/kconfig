 
 
 

int
foo (unsigned int x, int y)
{
  int *z = (int *)&x;
  return (y == 0) ? y : *z;
}

