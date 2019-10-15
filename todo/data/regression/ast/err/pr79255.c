 
 
 

static inline __attribute__((always_inline)) int foo (int x);

int
baz (void)
{
  return foo (3) + foo (6) + foo (9);
}

static inline __attribute__((always_inline)) int
foo (int x)
{
  auto inline int __attribute__((noinline)) bar (int x)
  {
    return x + 3;
  }
  return bar (x) + bar (x + 2);
}

