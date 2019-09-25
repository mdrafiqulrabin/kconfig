 
 

void f(const char *s)
{
  __PTRDIFF_TYPE__ n = __builtin_strlen (s);
  if (n < 0)
    __builtin_abort ();
}

 

