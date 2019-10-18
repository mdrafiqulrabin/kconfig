 
 
 

#define N 1000
int a[N];

int foo (void)
{
  int j;
  int i;

   
  for (i = 0; i < N; i++)
    for (j = 0; j < N; j++)
      a[j] = a[i] + 1;

  return a[0];
}

 

 

