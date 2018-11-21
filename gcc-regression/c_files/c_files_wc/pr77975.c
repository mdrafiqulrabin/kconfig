 
 
 

 

unsigned int
foo (unsigned int *b)
{
  unsigned int a = 3;
  while (a)
    {
      a >>= 1;
      *b += a;
    }
  return a; 
}

 

unsigned int
bar (unsigned int *b)
{
  unsigned int a = 7;
  while (a)
    {
      a >>= 1;
      *b += a;
    }
  return a; 
}

