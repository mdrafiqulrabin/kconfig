 
 
 

int
foo (int *v, int A, int B)	 
{
  int r = 0;
  int a = 2;			 
  int b = 4;			 
#pragma omp target map(to: v[a:b])
  r |= v[3];
#pragma omp target map(to: v[A:B])
  r |= v[3];
  return r;
}

