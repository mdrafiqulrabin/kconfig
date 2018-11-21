 
 
 

typedef __int128 V __attribute__ ((vector_size (16)));

extern int bar (V);

V v;
int i;

V
foo (void)
{
  do
    v *= bar (v & i);
  while ((V){}[0]);
  return v;
}

