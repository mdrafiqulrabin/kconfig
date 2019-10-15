 
 

float x[256];

double *
foo (void)
{
  double *z = __builtin_malloc (sizeof (double) * 256);
  int i;
  for (i = 0; i < 256; ++i)
    z[i] = x[i] + 1.0f;
  foo ();
  return 0;
}

