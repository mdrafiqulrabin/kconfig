 
 
 

int
foo (void)
{
  const int a = 0;
  static int b = a;	 
  return b;
}

