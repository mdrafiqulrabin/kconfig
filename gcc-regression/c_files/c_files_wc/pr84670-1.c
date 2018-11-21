 
 

int a, b, c, d;

int
foo (void)
{
  __int128 i;
l:
  i -= c;
  if (b)
    goto l;
  __builtin_mul_overflow (0, a, &c);
  if (d)
    goto l;
  return i;
}

