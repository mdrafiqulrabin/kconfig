 
 
 
#define N 26
int a[N];
__attribute__ ((noinline, noclone))
     int main1 (int X)
{
  int s = X;
  int i;
  for (i = 0; i < N; i++)
    s += (i + a[i]);
  return s;
}

int
main (void)
{
  int s, i;
  for (i = 0; i < N; i++)
    a[i] = 2 * i;
  s = main1 (3);
  if (s != 978)
    __builtin_abort ();
  return 0;
}


