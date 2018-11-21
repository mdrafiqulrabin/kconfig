 
 
 

 

void
foo (float *__restrict__ __attribute__ ((aligned (16))) a,
     float *__restrict__ __attribute__ ((aligned (16))) x,
     float *__restrict__ __attribute__ ((aligned (16))) y,
     float *__restrict__ __attribute__ ((aligned (16))) z)
{
  unsigned i = 0;
  for (i = 0; i < 256; i++)
    a[i] = x[i] - (y[i] * z[i]);
}

 

