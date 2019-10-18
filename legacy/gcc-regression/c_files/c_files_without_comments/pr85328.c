 
 
 

typedef char U __attribute__((vector_size (64)));
typedef int V __attribute__((vector_size (64)));
U a, b;

extern void bar (void);

V
foo (V f)
{
  b <<= (U){(V){}[63]} & 7;
  bar ();
  a = (U)f & 7;
  return (V)b;
}

