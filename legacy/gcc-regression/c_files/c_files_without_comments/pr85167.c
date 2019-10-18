 
 
 

struct A { long b; };
int c, d, e;
int bar (void);

int
foo (void)
{
  long g;
  for (; g == c ? 0 : (e = 1); g = ((struct A *)g)->b)
    if (bar ())
      return d;
}

