 
long long a;
void
f (void)
{
  int c = 1;
  volatile int *p = &c;
  a = (long long) (__PTRDIFF_TYPE__) p;
  *p;
}

