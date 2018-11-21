 
 
 

#include <stdarg.h>

static void
foo (va_list ap)
{
  va_arg (ap, char *)[0];
}

void
bar (va_list ap)
{
  foo (ap);
}

void
baz (va_list ap)
{
  foo (ap);
}

