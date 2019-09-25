 

void *p;

void f (int n)
{
  if (n <= 4)
    p = __builtin_malloc (n);
   
}

void g (unsigned n)
{
  if (n < 5)
    n = 5;
  f (n);
}

