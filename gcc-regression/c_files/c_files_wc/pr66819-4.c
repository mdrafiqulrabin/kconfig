 
 
 

#include <stdarg.h>

void (*bar)(int, va_list); 

void foo(int i, va_list args)
{
  bar(i, args);
}

