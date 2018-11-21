 
 
 

 

#include <stdarg.h>

void foo(register short paramN, ...)
{
  va_list ap;

  va_start(ap, paramN);  
  
   
  (void) va_arg(ap, char);  
   
   

  va_end(ap);
}


