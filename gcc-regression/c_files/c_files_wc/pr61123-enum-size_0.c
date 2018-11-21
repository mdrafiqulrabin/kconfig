 
 

#include <stdlib.h>

enum enum_size_attribute
{
  small_size, int_size
};

struct debug_ABI_enum_size
{
  enum enum_size_attribute es;
};

int
foo1 (struct debug_ABI_enum_size *x)
{
  return sizeof (x->es);
}

 

