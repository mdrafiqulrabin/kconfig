 
 
 

extern void bar (int*);

char *p;

int
main ()
{
  int q;
  p = __builtin_stack_save ();
  bar (&q);
  __builtin_stack_restore (p);
  bar (&q);
  return 0;
}

