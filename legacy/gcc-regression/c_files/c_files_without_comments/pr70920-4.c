 
 
 

#include <stdint.h>

void f1();
void f2();

void
foo (int a)
{
  void *cst = 0; 
  if ((int *) a == cst)
    {
      f1 ();
      if (a) 
	f2 (); 
    }
}

 

