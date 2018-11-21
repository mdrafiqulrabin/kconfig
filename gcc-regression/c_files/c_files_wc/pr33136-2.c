 
 
 

extern void abort (void);

struct S
{
  void *a;
  int b;
  int *c;
};
static int d, e;

static struct S s;

static int *
__attribute__((noinline, const))
foo (void)
{
  return &s.b;
}

int *
__attribute__((noinline))
bar (int **f)
{
  s.c = &d;
  *f = &e;
   
  return s.c;
}

int
__attribute__((noinline))
baz (int *x)
{
  s.b = 1;
  *x = 4;
   
  return s.b;
}

int
__attribute__((noinline))
t (void)
{
  int *f = (int *) 0;
  return 10 * (bar (&f) != &d) + baz (foo ());
}

int
main (void)
{
  if (t () != 4)
    abort ();
  return 0;
}

