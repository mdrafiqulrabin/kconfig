 
 
 
 

static void baz (void) __attribute__((weakref("bar")));	 

int
foo (int x, int y)
{
  if (x)
    y = 0;
  if (y)
    goto lab;
  y = 0;
lab:
  return y;
}

void
bar (int x, int y)	 
{
  y = foo (x, y);
  if (y != 0)
    baz ();
}

