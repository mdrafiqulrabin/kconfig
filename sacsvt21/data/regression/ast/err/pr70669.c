 
 
 
 

#ifndef TYPE
#define TYPE __float128
#endif

void foo (TYPE *p, TYPE *q)
{
  TYPE r = *q;
#ifndef NO_ASM
  __asm__ (" # %0" : "+r" (r));
#endif
  *p = r + r;
}

 
 
 
 

