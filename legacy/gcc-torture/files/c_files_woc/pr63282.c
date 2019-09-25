 

void bar (void);

void
foo (void)
{
  asm volatile goto ("" : : : : a, b);
a:
  bar ();
b:
  return;
}

