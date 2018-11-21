 
 
 
 
 
 
 
 

 
#include <altivec.h>

 

 
__attribute__((target("cpu=power7")))
int
div_we (int a, int b)
{  
  return __builtin_divwe (a, b);  
}

