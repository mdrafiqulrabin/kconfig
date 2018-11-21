 
 

extern void bar (void) __attribute__ ((visibility ("hidden")));

void *
foo (void)
{
  return &bar;
}

 
 
 

