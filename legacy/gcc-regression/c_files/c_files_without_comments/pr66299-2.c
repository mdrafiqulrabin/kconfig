 
 
 
 

void
test1 (int x, unsigned u)
{
  if ((1U << x) != 64
      || (2 << x) != u
      || (x << x) != 384
      || (3 << x) == 9
      || (x << 14) != 98304U
      || (1 << x) == 14
      || (3 << 2) != 12)
    __builtin_abort ();
}

void
test2 (int x)
{
  unsigned int t = ((unsigned int) 1U << x);
  if (t != 2U)
    __builtin_abort ();
}

int
main (void)
{
  test1 (6, 128U);
  test2 (1);
}

 

