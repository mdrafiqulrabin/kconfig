 
 
 

#include "../nop.h"

static const char *c = "foobar";

__attribute__((noinline, noclone)) void
foo (void)
{
  static const char a[] = "abcdefg";
  const char *b = a;		 
  asm (NOP : : : "memory");	 
}

int
main ()
{
  foo ();
  return 0;
}

