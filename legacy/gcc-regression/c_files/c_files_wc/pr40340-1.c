 
 
 

#include "pr40340.h"

static inline
__attribute__ ((always_inline))
void
test (char *p)
{
  memset (p, 0, 6);
}

int
main (void)
{
  char buf[4];
  test (buf);
  return 0;
}

 
 

