 
 
 

void bar (int);

void
foo (int x, int y)
{
  __attribute__ ((vector_size (8 * sizeof (short)))) short s0 = { x };
  bar ((short) (long) &s0 + y);
}

