 
 
 
__attribute__((target ("sse2"), noinline)) static void
foo (void)
{
  asm volatile ("" : : : "memory");
}

void
bar (void)
{
  foo ();
}


