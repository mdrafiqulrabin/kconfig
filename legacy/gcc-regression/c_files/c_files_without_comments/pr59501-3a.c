 
 
 

typedef double V __attribute__ ((vector_size (32)));

V
foo (double *x, int a, int b, int c, int d, int e, int f, unsigned *y)
{
  V r = { x[y[0]], x[y[1]], x[y[2]], x[y[3]] };
  return r;
}

 
 

