 
 

__attribute__((noinline, no_icf, used))
static void *f(__SIZE_TYPE__ n)
{
  void *p = __builtin_malloc (n);
  if (p == 0)
    __builtin_abort ();
  return p;
}

__attribute__((noinline, no_icf, used))
static void *bar(__SIZE_TYPE__ n)
{
  void *p = f (n);
  return p;
}

 
 

