 
 
 

extern void baz (int) __attribute__ ((__ms_abi__));

void
foo (void (__attribute__ ((ms_abi)) *fn) (int))
{
  fn (0);
}

void
bar (void)
{
  baz (0);
}

