 
 
 

_Complex int
foo (int a)
{
  return a < 0;
}

_Complex int
bar (int a)
{
  return (a & 8) ? (_Complex int) 16 : (_Complex int) 0;
}

