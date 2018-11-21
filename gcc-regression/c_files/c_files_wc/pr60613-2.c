 
 
 

long long y;

__attribute__((noinline, noclone)) long long
foo (long long x)
{
  asm ("");
  if (x >= 0 || x < -2040)
    return 23;
  x += 2040;
  return x - y;
}

__attribute__((noinline, noclone)) long long
bar (long long x)
{
  asm ("");
  return 8LL - x;
}

int
main ()
{
  y = -__LONG_LONG_MAX__ + 6;
  if (foo (8 - 2040) != -__LONG_LONG_MAX__)
    __builtin_abort ();
  if (bar (-__LONG_LONG_MAX__ + 5) != -__LONG_LONG_MAX__ + 1)
    __builtin_abort ();
  return 0;
}

 
 

