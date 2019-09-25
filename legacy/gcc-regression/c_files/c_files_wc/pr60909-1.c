 
 

extern void bar (int);

void
foo (unsigned *u)
{
  int i = __builtin_ia32_rdrand32_step (u);
  bar (i);
}

