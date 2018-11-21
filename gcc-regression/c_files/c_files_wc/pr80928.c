 
 

#include "tree-vect.h"

int a[1020];

void __attribute__((noinline))
foo ()
{
  for (int i = 0; i < 1020; i += 5)
    {
      a[i] = i;
      a[i+1] = i;
      a[i+2] = i;
      a[i+3] = i;
      a[i+4] = i;
    }
}

int main ()
{
  check_vect ();

  foo ();

   
  for (int i = 0; i < 1020; ++i)
    if (a[i] != ((i + 4) / 5) * 5)
      abort ();

  return 0;
}

 
 
 

