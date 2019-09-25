 
 
 

static unsigned long __attribute__((naked))
foo (unsigned long base)
{
  asm volatile ("dummy");
}
unsigned long
bar (void)
{
  static int start, set;

  if (!set)
    {
      set = 1;
      start = foo (0);
    }

  return foo (start);
}

 

