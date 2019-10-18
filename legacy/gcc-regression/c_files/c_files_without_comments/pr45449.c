 
 
 

struct S
{
};

void
baz (void)
{
  struct S s;
  &s;
}

int bar (void);

void
foo (void)
{
  if (bar ())
    baz ();
}

