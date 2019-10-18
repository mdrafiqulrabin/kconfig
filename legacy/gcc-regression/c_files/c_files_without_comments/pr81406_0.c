 
 
 
 

int a;
int *foo (void);

static inline int __attribute__ ((__artificial__))
bar (void)
{
  if (a)
    *foo () = 2;
}

void *
baz (void)
{
  return (void *) bar;
}

