 
 
 

int
foo (int *x)
{
  int i, r = 1;
  for (i = 0; i != 1024; i++)
    r *= x[i] < 0;
  return r;
}

