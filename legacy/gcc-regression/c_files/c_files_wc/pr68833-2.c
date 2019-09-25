 
 
 

#include <stdarg.h>

void
foo (const char *fmt, ...)
{
  va_list ap;
  va_start (ap, fmt);
  __builtin_vprintf (fmt, ap);  
  va_end (ap);
}

 

