 

typedef __SIZE_TYPE__ size_t;

void f (char *dst, size_t n, const char *s)
{
  if (n < 2 || __INT_MAX__ - 2 < n)
    n = 2;

  __builtin_sprintf (dst, "%.*s %.*s", (int)n, s, (int)n, s);    
}

