 
 

unsigned g (void)
{
  char d[8];
  const char s[] = "0123";
  __builtin_memcpy (d, s, sizeof s);
  return __builtin_strlen (d);
}

 

