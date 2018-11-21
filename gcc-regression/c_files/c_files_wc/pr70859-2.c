 
 

#ifdef _AIX
#define _ISOC99_SOURCE
#endif
#include <stdint.h>
#define MAX __SIZE_MAX__
#define MAX2 SIZE_MAX
#define FIVE 5

static void *p;

void
fn0 (int n)
{
  p = __builtin_alloca_with_align (n, SIZE_MAX);  
  p = __builtin_alloca_with_align (n, MAX);  
  p = __builtin_alloca_with_align (n, MAX2);  
  p = __builtin_alloca_with_align (n, FIVE);  
}

