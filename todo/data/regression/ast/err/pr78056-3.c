 
 
 
 
 

 
#include <altivec.h>

 
__attribute__((target("cpu=power8")))
char
char_fetch_add_relaxed (char *ptr, int value)
{
  return __atomic_fetch_add (ptr, value, __ATOMIC_RELAXED);
}

 

