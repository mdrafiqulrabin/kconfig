 
 
 
 

static inline __attribute__((always_inline)) int *
foo (void)
{
  __UINTPTR_TYPE__ sp;
  asm ("" : "=r" (sp));
  return (int *) sp;
}

void
bar (void)
{
  foo ()[0] += 26;
}

 

