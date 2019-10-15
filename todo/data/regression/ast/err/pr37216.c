 
 
 
 

#include "sse2-check.h"

int iarr[64];
int iint = 0;

void
sse2_test (void)
{
  int i;

  for (i = 0; i < 64; i++)
    iarr[i] = -2;
}

