 
 

int foo (int c)
{
  if (c != 0)
    c /= __builtin_abs (c);
  return c;
}

int bar (int c)
{
  if (c != 0)
    c /= -c;
  return c;
}

 

