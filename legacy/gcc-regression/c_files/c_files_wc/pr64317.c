 
 
 
 
 
 
 
long c = 1;

int bar();

int foo (unsigned int iters)
{
  unsigned int i;
  
  int res = 0;
  static long t1;
  
  for (i = 0; i < iters; i++)
    {
      res = bar();
      t1 = c + res;
    }
  
  return t1 + res;
}

