 
 
 

extern void foo (int, int, int, int, int, int);

void
bar (int x, int y)
{
  foo (0, 0, 0, 0, x / y, x % y);
}


