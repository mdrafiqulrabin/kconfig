 
 
 
#include "pr7263-2.h"
unsigned long long  
bar ()
{
  return BIG_EXT;
}

unsigned long long  
bar2 ()
{
  return 0x1b27da572ef3cd86ULL;  
}


unsigned long long  
bar3 ()
{
  return __extension__ (0x1b27da572ef3cd86ULL);
}

__extension__ unsigned long long 
bar4 ()
{
  return BIG; 
}

