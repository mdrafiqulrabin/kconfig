 
 
 
 
 
 

 
#include <altivec.h>

 
__attribute__((target("cpu=power9")))
int get_random ()
{  
  return __builtin_darn_32 ();  
}


