 
 

void
ew (unsigned short int c9, int stuff)
{
  int e1;

  for (;;)
    {
      unsigned int *by = &e1;
      int *fd = &stuff;

      *fd = c9;
      fd = *fd;
      if (*fd != 0)
	for (*by = 0; *by < 2; ++*by)
	  c9 *= e1;
    }
}

