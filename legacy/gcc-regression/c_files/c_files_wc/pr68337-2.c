 
 
 

void
test (void *dst, void *src)
{
  __builtin_memcpy (dst, src, sizeof (char *) / 2);
}

