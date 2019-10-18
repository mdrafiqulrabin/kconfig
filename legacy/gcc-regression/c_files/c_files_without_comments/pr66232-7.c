 
 

extern void bar (void) __attribute__((visibility("hidden")));

int
foo (void)
{
  bar ();
  return 0;
}

 
 

