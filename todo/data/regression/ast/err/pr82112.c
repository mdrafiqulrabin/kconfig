 
 
 
 

#include <altivec.h>

struct __attribute__((aligned (16))) S { unsigned char c[64]; } bar (void);
vector unsigned char v;

void
foo (void)
{
  vec_ld (0, bar ().c);	 
  vec_st (v, 0, bar ().c);	 
}

