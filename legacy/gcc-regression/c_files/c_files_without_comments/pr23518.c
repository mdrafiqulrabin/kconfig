 

 
 

#include <limits.h>

extern void abort (void);
extern void exit (int);

int
main (void)
{
  int a = INT_MAX;
  if ((a < 0) || (a + 1 < 0))
    exit (0);

  abort ();
}

