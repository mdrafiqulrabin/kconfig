 
 

int
foo (void)
{
  return 0;
}

void
bar (int **p)
{
  *p = (int *) (__UINTPTR_TYPE__) foo ();
}

