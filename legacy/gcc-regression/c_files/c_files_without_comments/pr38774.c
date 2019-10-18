 
 
 
 

extern int bar (void);
volatile int g;

int
foo (void)
{
  int a = 1 >= bar ();
  if ((1 > 9223372036854775807LL - a && 1 - a ? : 1 + a) & 1)
    return g;
  return 0;
}

