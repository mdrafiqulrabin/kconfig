 
 

void
daxpy(int n, double da, double * __restrict dx, double * __restrict dy)
{
  int i;

  for (i = 0;i < n; i++)
    dy[i] = dy[i] + da*dx[i];
}

