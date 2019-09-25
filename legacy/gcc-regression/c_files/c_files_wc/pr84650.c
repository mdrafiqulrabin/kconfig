 
 

unsigned int dj;

void
np (void)
{
  const unsigned int uw = 2;
  unsigned int eu;

  for (eu = 0; eu < uw; ++eu)
    {
      for (dj = 0; dj < uw; ++dj)
	;
      eu -= !!(dj - uw - 1);
    }
}

