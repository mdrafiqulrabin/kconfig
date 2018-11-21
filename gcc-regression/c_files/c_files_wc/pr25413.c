 

#include <stdarg.h>
#include "tree-vect.h"

#define N 8

struct
{
  char c;
  double d[N];
} a;

__attribute__ ((noinline))
int main1()
{
  int i;
  for ( i=0; i<N; ++i )
    a.d[i]=1;
  return 0;
}

int main (void)
{ 
  int i;
  check_vect ();
  
  main1 ();
  for (i=0; i<N; i++)
    if (a.d[i] != 1)
      abort ();
  return 0;
} 

 
 
 
 

