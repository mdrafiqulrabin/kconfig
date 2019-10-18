 
 

void
foo (double *a[], int b)
{
  for (; b; b++)
    a[b][b] = 1.0;
}

