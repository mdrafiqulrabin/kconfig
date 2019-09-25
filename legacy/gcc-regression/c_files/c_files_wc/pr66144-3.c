 
 
 
 

 

#include <altivec.h>

static int a[1024], b[1024], c[1024];

int *p_a = a, *p_b = b, *p_c = c;

void
test (void)
{
  unsigned long i;

  for (i = 0; i < 1024; i++)
    a[i] = (b[i] == c[i]) ? -1 : a[i];
}

 
 
 
 

