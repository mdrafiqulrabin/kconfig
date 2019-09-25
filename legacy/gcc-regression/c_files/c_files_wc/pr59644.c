 
 
 

 

#include <stdarg.h>

__attribute__((noinline, noclone))
int
bar (int x, int y, int z, int w, const char *fmt, va_list ap)
{
  if (x != 1 || y != 2 || z != 3 || w != 4)
    __builtin_trap ();
  if (fmt[0] != 'f' || fmt[1] != 'o' || fmt[2] != 'o' || fmt[3])
    __builtin_trap ();
  if (va_arg (ap, int) != 5 || va_arg (ap, int) != 6
      || va_arg (ap, long long) != 7LL)
    __builtin_trap ();
  return 9;
}

__attribute__((noinline, noclone, optimize ("Os")))
int
foo (const char *fmt, ...)
{
  va_list ap;
  va_start (ap, fmt);
  int r = bar (1, 2, 3, 4, fmt, ap);
  va_end (ap);
  return r;
}

int
main ()
{
  if (foo ("foo", 5, 6, 7LL) != 9)
    __builtin_trap ();
  return 0;
}

