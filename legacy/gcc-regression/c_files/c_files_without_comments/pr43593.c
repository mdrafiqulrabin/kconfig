 
 
 

void __attribute__((noinline))
bar (int *p)
{
  asm volatile ("" : : "r" (p) : "memory");
}

int __attribute__((noinline))
foo (void)
{
  int i, *j = &i;
  bar (j);
  return 6 + i;	 
}

int
main (void)
{
  foo ();
  return 0;
}

