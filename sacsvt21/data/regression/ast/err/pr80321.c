 
 
 

void bar (void);

static inline void
test (int x)
{
  inline void
  foo (int x)
  {
    test (0);
    asm volatile ("" : : : "memory");
  }
  if (x != 0)
    foo (x);
  else
    bar ();
}

void
baz (int x)
{
  test (x);
}

