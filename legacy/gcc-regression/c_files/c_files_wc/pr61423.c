 
 
 

#define N 1024
static unsigned int A[N];

double
__attribute__((noinline))
func (void)
{
  unsigned int sum = 0;
  unsigned i;
  double t;

  for (i = 0; i < N; i++)
    sum += A[i];

  t = sum;
  return t;
}

int
main ()
{
  unsigned i;
  double d;

  for(i = 0; i < N; i++)
    A[i] = 1;

  d = func();

  if (d != 1024.0)
    __builtin_abort ();

  return 0;
}

