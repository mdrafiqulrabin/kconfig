 
 

extern char *src, *dst;

char *
foo1 (void)
{
  return __builtin_memcpy (dst, src, 16);
}

 

