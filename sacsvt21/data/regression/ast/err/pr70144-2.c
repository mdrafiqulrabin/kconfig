 
 
 

int
main ()
{
  if (__builtin_constant_p (__builtin_memset) != 0
      || __builtin_classify_type (__builtin_memset) != 5)
    __builtin_abort ();
  return 0;
}

