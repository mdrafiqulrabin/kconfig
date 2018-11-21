 
 
 

long a[10];

__attribute__((noinline, noclone)) long *
foo (int i)
{
  return &a[i];
}

__attribute__((noinline, noclone)) long
bar (long x, long y)
{
  return x * y;
}

int
main ()
{
  volatile int i = -1;
  volatile long l = __LONG_MAX__;
  long *volatile p;
  p = foo (i);
  l = bar (l, l);
  return 0;
}

 
 

