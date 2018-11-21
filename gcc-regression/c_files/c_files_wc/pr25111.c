 
 

 
 
 

int bar (void);

int
foo1 (int b)
{
  int a = bar ();
  return ( a | (1 << (b & 31)));
}

int
foo2 (int b)
{
  int a = bar ();
  return ( a ^ (1 << (b & 31)));
}


int
foo3 (int b)
{
  int a = bar ();
  return ( a & ~(1 << (b & 31)));
}



