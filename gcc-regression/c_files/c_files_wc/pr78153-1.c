 
 

void f(const char *s)
{
  if (__PTRDIFF_MAX__ <= __builtin_strlen (s))
    __builtin_abort ();
}

 

