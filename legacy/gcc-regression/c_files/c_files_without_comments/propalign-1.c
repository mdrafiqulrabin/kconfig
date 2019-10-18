 
 
 

#include <stdint.h>

extern int fail_the_test(void *);
extern int pass_the_test(void *);
extern int diversion (void *);

static int __attribute__((noinline))
foo (void *p)
{
  uintptr_t a = (uintptr_t) p;

  if (a % 4)
    return fail_the_test (p);
  else
    return pass_the_test (p);
}

int
bar (void)
{
  double buf[8] __attribute__ ((__aligned__(__BIGGEST_ALIGNMENT__)));
  return foo (&buf);
}


 
 

