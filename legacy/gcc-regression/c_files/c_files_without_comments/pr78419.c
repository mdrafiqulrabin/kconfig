 
 
 

static double bar (double *__restrict, double *__restrict, int)
__attribute__ ((target_clones("avx,foo,avx2,avx512f,default")));

double
foo (double *__restrict a, double *__restrict b, int n)
{
  return bar (a,b,n);
}

double
bar (double *__restrict a, double *__restrict b, int n)	 
{
  double s;
  int i;
  s = 0.0;
  for (i=0; i<n; i++)
    s += a[i] + b[i];

  return s;
}

