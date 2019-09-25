 
 
 
 

void bar (void);

void
foo (int *p)
{
  if (__atomic_sub_fetch (p, 1, __ATOMIC_SEQ_CST))
    bar ();
}

 
 

