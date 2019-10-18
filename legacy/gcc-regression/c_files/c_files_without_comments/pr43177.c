 
 

void __attribute__((noinline))
bar (long x)
{
  asm volatile ("" : : "r" (x) : "memory");
}

long __attribute__((noinline))
foo (long x)
{
  long l = x + 3;
  bar (l); 
  bar (l); 
  return l;
}

long __attribute__((noinline))
baz (int x)
{
  long l = x + 3;
  bar (l); 
  bar (l); 
  return l;
}

int
main (void)
{
  int i;
  asm volatile ("" : "=r" (i) : "0" (7));
  foo (i);
  baz (i);
  return 0;
}

