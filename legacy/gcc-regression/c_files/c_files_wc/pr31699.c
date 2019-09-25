 

#include <stdlib.h>
#include <stdarg.h>
#include "tree-vect.h"

float x[256];

__attribute__ ((noinline))
float *foo(void)
{
 float *z = malloc (sizeof(float) * 256);

 int i;
 for (i=0; i<256; ++i)
   z[i] = x[i] + 1.0f;

 return z;
}


int main()
{
 int i;

 check_vect ();

 for (i = 0; i < 256; i++)
   x[i] = (float) i;

 foo();

 return 0;
}

 
 
 

