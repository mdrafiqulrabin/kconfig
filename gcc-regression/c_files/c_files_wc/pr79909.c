 
 
 
 

typedef float T __attribute__ ((mode (TD)));
T b, c, d, e, f, g;
void bar (T, T, T, T, T, T);

void
foo (void)
{
  bar (e, b, f, c, g, d);
}

