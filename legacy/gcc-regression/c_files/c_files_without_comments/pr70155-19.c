 
 

extern char *src, *dst;

char *
foo1 (void)
{
  return __builtin_mempcpy (dst, src, 16);
}

 

