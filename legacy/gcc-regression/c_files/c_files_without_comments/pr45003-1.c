 
 
 

int __attribute__((noinline))
foo (unsigned short *p)
{
  int a = *p;
  asm volatile ("nop");
  asm volatile ("nop" : : "D" (a));	 
  return 0;
}

int __attribute__((noinline))
bar (short *p)
{
  unsigned int a = *p;
  asm volatile ("nop");
  asm volatile ("nop" : : "D" (a));	 
  return 0;
}

int
main ()
{
  unsigned short us = 0x8078;
  foo (&us);
  short s = -32648;
  bar (&s);
  return 0;
}

