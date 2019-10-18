 
 

#include <stdint.h>

void f1();
void f2();

void
foo (int a)
{
  if ((int *) a == 0)
    {
      f1 ();
      if (a)
	f2 (); 
    }
}

 

