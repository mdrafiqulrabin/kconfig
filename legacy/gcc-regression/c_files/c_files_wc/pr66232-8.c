 
 

extern int bar (void) __attribute__((visibility("hidden")));

int
foo (void)
{
  return bar ();
}

 
 

