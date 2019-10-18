 

void f (void *p, int n)
{
  if (n <= 4)
    __builtin_memset (p, 0, n);    
}

void g (void *d, unsigned n)
{
  if (n < 5)
    n = 5;
  f (d, n);
}

