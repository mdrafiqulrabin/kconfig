 

 
 

#define N 1000000

double a[N];

double test(void)
{
  unsigned i;
  double sum = 0;

  for (i = 0; i < N; i += 2)
    sum += (a[i] * a[i+1]);

  return sum;
}

 

