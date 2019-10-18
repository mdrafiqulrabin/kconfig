 
 

void
foo (double *x, int *y)
{
  int i;
  for (i = 0; i < 8; i++)
    x[i] -= y[i] * x[i + 1];
}

 

