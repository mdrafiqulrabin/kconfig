 

void
foo (unsigned int a, unsigned int b)
{
  if (a > b)
    {
      while (a)
	{
	  switch (b)
	    {
	    default:
	      a = 0;
	    case 2:
	      a = 0;
	    case 1:
	      a = 0;
	    case 0:
	      ;
	    }
	}
    }
}

