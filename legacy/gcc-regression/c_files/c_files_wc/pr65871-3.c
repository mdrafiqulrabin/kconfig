 
 

int foo (int x, int y)
{
  if (~x & y)
    return 1;

  return 0;
}

int bar (int x, int y)
{
  if ((~x & y) > 0)
    return 1;

  return 0;
}

 

