 
 

extern int bar (int, int);

int
foo (int a, int b)
{
  (void) bar (a, b);
  return bar (a, b);
}

 

