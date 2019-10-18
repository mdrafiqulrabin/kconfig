 
 
 

#include <stdarg.h>

int
foo (int a, ...)
{
  int b = 0, c = 0;
  va_list ap;
  va_start (ap, a);
  if (a > 1)
    b = va_arg (ap, double);
  if (a > 2)
    c = va_arg (ap, long long);
  va_end (ap);
  return a + b + c;
}

 
 
 

