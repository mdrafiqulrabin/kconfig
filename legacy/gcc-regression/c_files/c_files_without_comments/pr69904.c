 
 
 
 

 

#include <stdatomic.h>

atomic_uint foo;
atomic_uint bar;
int glob;

int
main (void)
{
  glob = atomic_compare_exchange_strong (&foo, &bar, 0);
  return glob;
}

 
 
 

