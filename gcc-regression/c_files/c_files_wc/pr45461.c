 
 

#include <stdarg.h>

int
foo (int i, ...)
{
  short e;
  va_list ap;
  va_start (ap, i);

  e = va_arg (ap, short);	 
   
   
  
  va_end (ap);
  return e;
}


