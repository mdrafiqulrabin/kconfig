 

#include <stdarg.h>
#include "tree-vect.h"

#define N 8

int b[N] = {0,3,6,9,12,15,18,21};
int a[N];
 
__attribute__ ((noinline))
int main1 ()
{  
  int i;

  for (i = 0; i < N; i++)
    {
      a[i] = b[i];
    }

   
  for (i = 0; i < N; i++)
    {
      if (a[i] != b[i])
        abort ();
    }

  return 0;
}

int main (void)
{ 
  check_vect ();
  
  return main1 ();
} 

 

