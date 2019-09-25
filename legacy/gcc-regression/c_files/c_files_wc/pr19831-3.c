 
 

void test2(void)
{
  int *p = __builtin_malloc (sizeof (int) * 4);
  if (p == (void *)0)
    __builtin_abort ();
  __builtin_free (p);
}

void test5(int b)
{
  int *p = __builtin_malloc (sizeof (int) * 4);
  if (p)
    __builtin_free (p);
}

void test6(void)
{
  int *p = __builtin_malloc (sizeof (int) * 4);
  if (p == (void *)0)
    __builtin_abort ();
  if (p)
    __builtin_free (p);
}

 

 
 

 

 
 

