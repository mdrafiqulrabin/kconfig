 
 
 
 

extern double A[32];

int
foo (void)
{
  double t = A[0];
  int jp = 0;
  int i;

  for (i = 0; i < 32; i++)
    {
      double ab = A[i];
      if (ab > t)
	{
	  jp = i;
	  t = ab;
	}
    }
 
  return jp;
}

 

