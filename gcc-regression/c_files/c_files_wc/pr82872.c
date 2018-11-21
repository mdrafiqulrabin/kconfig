 
 

#include <stddef.h>

struct S { int i, a[1]; };

size_t foo (void)
{
  return offsetof (struct S, a[__PTRDIFF_MAX__]);
}

