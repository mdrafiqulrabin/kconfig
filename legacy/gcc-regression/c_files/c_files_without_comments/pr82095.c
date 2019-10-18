 
 
 
 
 

static int b;
static __thread int c;

void
foo (void)
{
  if (b)
    if (c)
      b = 1;
}

