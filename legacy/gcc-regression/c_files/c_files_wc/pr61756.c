 

 
 

#include <stdatomic.h>

static volatile atomic_flag guard = ATOMIC_FLAG_INIT;

void
try_atomic_flag_test_and_set (void)
{
  atomic_flag_test_and_set (&guard);
}

