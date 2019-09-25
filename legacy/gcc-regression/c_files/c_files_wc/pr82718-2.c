 
 
 

extern int bar (void);

int
foo (int x)
{
  if (bar ())
    __builtin_abort ();
}

