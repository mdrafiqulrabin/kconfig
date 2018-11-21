 
 
 
 

#include <complex.h>

extern double myabs (complex double);

void
test (double *help, complex double *wm, long nz)
{
  long k;
  double znew;
  double zold;
  for (k = 0; k < nz; k++)
    {
      znew = myabs (wm[k]);
      zold = help[k];
      help[k] = znew;
    }
}

