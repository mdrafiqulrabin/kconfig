 
 
 

char src[64] __attribute__ ((aligned)) = "aaaaaaa";
char dst[64] __attribute__ ((aligned));

int
main ()
{
  __builtin_memcpy (dst, src, 6);
  if (__builtin_memcmp (dst, src, 6))
    __builtin_abort ();

  __builtin_memcpy (dst, src, 7);
  if (__builtin_memcmp (dst, src, 7))
    __builtin_abort ();

  return 0;
}



