 
 
 
 

#include <altivec.h>

 

void
foo (vector int *vp, int *ip)
{
  vector int v = *vp;
  __asm__ (" # fpr %x0" : "+d" (v));
  ip[4] = vec_extract (v, 0);
}

 

