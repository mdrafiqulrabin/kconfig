 
 
 
 

long long int v;

void
foo (int x)
{
  if (x == 0)
    return;

  while (v < 2)
    {
      signed char *a;
      v /= x;
      a = v == 0 ? (signed char *) &x : (signed char *) &v;
      ++*a;
      ++v;
    }

  while (1)
    ;
}

