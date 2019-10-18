 
 
 

int
foo (void)
{
  unsigned __int128 c;
  return __builtin_mul_overflow_p (59, -c, (short) 0);
}

