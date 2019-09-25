 
 

extern void foo (int, int, int);
extern void bar (int, int, int) __attribute__((visibility("hidden")));

void
foo (int a, int b, int c)
{
  foo (a, b, c);
  bar (a, b, c);
  foo (a, b, c);
  bar (a, b, c);
}

 

