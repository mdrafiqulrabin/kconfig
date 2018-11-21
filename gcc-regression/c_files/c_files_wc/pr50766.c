 
 
 
 

#include <x86intrin.h>

unsigned z;

void
foo ()
{
  unsigned x = 0x23593464;
  unsigned y = 0xF9494302;
  z = _pext_u32(x, y);
}


