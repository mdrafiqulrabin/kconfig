 
 

#include <stdint.h>

void f1();
void f2();

void
foo (int *a)
{
  int cst = 0;
  if ((intptr_t) a == cst)
    {
      f1 ();
      if (a) 
	f2 (); 
    }
}

 

