 
 

typedef unsigned int uword_t __attribute__ ((mode (__word__)));

void
 __attribute__ ((interrupt))
fn1 (void *frame, uword_t error)
{
  char fxsave_region [512] __attribute__((aligned(16)));
  __builtin_ia32_fxsave64 (fxsave_region);
}

 
 
 

