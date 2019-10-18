 
 
 

volatile int v;
#define S v++;
#define S10 S S S S S S S S S S
#define S100 S10 S10 S10 S10 S10 S10 S10 S10 S10 S10

extern inline void
foo (void) { S100 }

inline void
bar (void) { S100 }

static inline void
baz (void) { S100 }

int
main ()
{
  foo ();
  foo ();
  foo ();
  foo ();
  bar ();
  bar ();
  bar ();
  bar ();
  baz ();
  baz ();
  baz ();
  baz ();
  return 0;
}

 
 

