 
 
 

int a;

void
foo (int (*fn) (int, int, int), unsigned int b)
{
  unsigned long *c = (unsigned long *) __builtin_alloca (b);
  a = *c;
  register int d asm ("edx") = fn (0, 0, d);
}

