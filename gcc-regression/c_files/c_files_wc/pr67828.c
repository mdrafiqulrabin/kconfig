 

 

#include <stdio.h>
#include <stdlib.h>

int x;

int __attribute__ ((noinline, noclone))
xprintf (int d) {
  if (d)
    {
      if (x)
	printf ("%d", d);
      abort ();
    }
}

int a, b;
short c;

int
main ()
{
  int j, d = 1;
  for (; c >= 0; c++)
    {
      a = d;
      d = 0;
      if (b)
	{
	  xprintf (0);
	  if (j)
	    xprintf (0);
	}
    }
  xprintf (d);
  exit (0);
}

