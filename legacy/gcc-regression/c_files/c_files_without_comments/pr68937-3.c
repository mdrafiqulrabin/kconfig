 
 

extern void bar (int, int, int);

void
foo (int a, int b, int c)
{
  bar (a, b, c);
  bar (a, b, c);
}

 

