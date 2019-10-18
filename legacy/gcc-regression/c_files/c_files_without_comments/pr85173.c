 

 
 
 

__attribute__((noinline, noclone)) void
foo (char *p)
{
  asm volatile ("" : : "r" (p) : "memory");
}

 
__attribute__((noinline, noclone)) void
f5 (int x)
{
  char locals[128];
  char *vla = __builtin_alloca (x);
  foo (vla);
}

