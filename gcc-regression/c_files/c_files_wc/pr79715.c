 

void f (const char *s)
{
  unsigned n = __builtin_strlen (s) + 1;
  char *p = __builtin_malloc (n);
  __builtin_memcpy (p, s, n);
  __builtin_free (p);
}

void g (const char *s)
{
  unsigned n = __builtin_strlen (s) + 1;
  char *p = __builtin_malloc (n);
  __builtin_strcpy (p, s);
  __builtin_free (p);
}

 

