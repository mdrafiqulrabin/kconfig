 
 

__attribute__((noinline, used, no_icf))
static void *foo (__SIZE_TYPE__ n)
{
  return __builtin_malloc (n * 10);
}

__attribute__((noinline, used, no_icf))
static void *bar(__SIZE_TYPE__ n, int cond)
{
  void *p;
  if (cond)
    p = foo (n);
  else
    p = __builtin_malloc (n);

  return p;
}

 
 

