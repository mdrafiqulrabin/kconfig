 
 
 

#include <stdarg.h>

int
foo (void *a)
{
  va_list *b = a;
  return va_arg (*b, int);
}

