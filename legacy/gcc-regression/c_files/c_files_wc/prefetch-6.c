 
 

#define N 1000
#define K 900

double a[N][N];

double test(void)
{
  unsigned i, j;
  double sum = 0;

   
  for (i = 0; i < K; i++)
    for (j = 0; j < K; j++)
      sum += a[i][j];

   
  for (i = 0; i < K; i++)
    for (j = 0; j < K; j++)
      sum += a[i][j] * a[i + 10][j];

   
  for (i = 0; i < K; i++)
    for (j = 0; j < K; j++)
      sum += a[i][j] * a[i + 100][j];

   
  for (i = 0; i < 100; i++)
    for (j = 0; j < 100; j++)
      sum += a[i][j] * a[i + 100][j];

   
  for (i = 0; i < N; i++)
    for (j = 0; j < N; j++)
      sum += a[j][i];

  return sum;
}

 
 

