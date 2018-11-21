 
 
 

volatile int v;
#define S v++;
#define S10 S S S S S S S S S S
#define S100 S10 S10 S10 S10 S10 S10 S10 S10 S10 S10

extern inline __attribute__((gnu_inline)) void
foo (void) { S100 }

int
main ()
{
  foo ();
  foo ();
  foo ();
  foo ();
  return 0;
}

 

