 
 
 

extern int x;

static void
__attribute__ ((noinline, noclone))
test (int i)
{
  x = i;
}

void
bar (int i)
{
  test (i);
}

