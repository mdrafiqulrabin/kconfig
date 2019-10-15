 
 

 
#define TYPE void *

static inline
void bar (TYPE *r)
{
  TYPE t;
  __asm__ ("" : "=&p" (t), "=p" (*r));
}

void
foo (int n, TYPE *x, TYPE *y)
{
  if (n == 0)
    bar (x);
  else
    bar (y);
}

 

