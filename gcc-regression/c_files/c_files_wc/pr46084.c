 
 
 
 
 

#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/resource.h>

 
static void use_buffer (char *buf, size_t) __attribute__ ((noinline));
static void
use_buffer (char *buf, size_t c)
{
  size_t i;

  for (i = 0; i < c; ++i)
    buf[i] = (char) i;
}

 

static void
down1 (int i)
{
  char buf[10 * i];

  if (i > 0)
    {
      use_buffer (buf, 10 * i);
      down1 (i - 1);
    }
}

 

static void
down2 (int i)
{
  char *buf = alloca (10 * i);

  if (i > 0)
    {
      use_buffer (buf, 10 * i);
      down2 (i - 1);
    }
}

int
main (void)
{
  struct rlimit r;

   
  r.rlim_cur = 8192 * 1024;
  r.rlim_max = 8192 * 1024;
  if (setrlimit (RLIMIT_STACK, &r) != 0)
    abort ();
  down1 (1000);
  down2 (1000);
  return 0;
}

