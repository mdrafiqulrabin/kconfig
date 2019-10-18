 
 

void
foo (int *p, int *q)
{
  *q = *p & ~*q;
}

void
bar (int *p, int *q)
{
  *q = ~*p & *q;
}

