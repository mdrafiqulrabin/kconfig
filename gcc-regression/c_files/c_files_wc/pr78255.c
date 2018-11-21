 
 

extern int bar (void *);

int
foo (void)
{
  return bar ((void *)bar);
}

 

