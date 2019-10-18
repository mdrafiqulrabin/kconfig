 
 
 
 
 

int a, b, d, e;
long long *c;

static int
foo (long long *x)
{
  return __sync_val_compare_and_swap (x, b, a);
}

void
bar (void)
{
  if (!c)
    return;
  e = foo (&c[d]);
}

