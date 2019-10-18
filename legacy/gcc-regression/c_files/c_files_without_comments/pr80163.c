 
 
 

void bar (void);

__int128_t *
foo (void)
{
a:
  bar ();
b:;
  static __int128_t d = (long) &&a - (long) &&b;	 
  return &d;
}

__int128_t *
baz (void)
{
  static __int128_t d = (long) (3 * 4);
  return &d;
}

