 
 
 

extern int foo (int *);
int
bar (int *p)
{
  __attribute__ ((noinline, noclone))
  int hack_digit (void)
    {
      return foo (p);
    }
  return hack_digit ();
}

