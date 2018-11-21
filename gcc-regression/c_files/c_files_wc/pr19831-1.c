 
 

void test1(void)
{
  int *p = __builtin_malloc (sizeof (int) * 4);
  int *q = p;
  *q++ = 4;
  *q++ = 4;
  __builtin_free (p);
}

void test3(int b)
{
  int *p = __builtin_malloc (sizeof (int) * 4);
  if (b)
    __builtin_free (p);
  *p = 5;
}

void test4(int b)
{
  int *p = __builtin_malloc (sizeof (int) * 4);
  if (b)
    __builtin_free (p);
  *p = 5;
  __builtin_free (p);
}

 
 

