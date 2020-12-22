 
 
 
extern void bar();

void __attribute__((__naked__))
foo(void)
{
  bar ();
}

int __attribute__((naked))
zoo (int a, int b, int c, int d, int e, int f)
{
  bar ();
  return e;
}
 
 

