 
 
 
 
 

#include <stdlib.h>
#include <pthread.h>

 
static void use_buffer (char *buf) __attribute__ ((noinline));
static void
use_buffer (char *buf)
{
  buf[0] = '\0';
}

 

static void
down (int i)
{
  char buf[10000];

  if (i > 0)
    {
      use_buffer (buf);
      down (i - 1);
    }
}

static void *
thread_routine (void *arg __attribute__ ((unused)))
{
  down (1000);
  return NULL;
}

int
main (void)
{
  int i;
  pthread_t tid;
  void *dummy;

  i = pthread_create (&tid, NULL, thread_routine, NULL);
  if (i != 0)
    abort ();
  i = pthread_join (tid, &dummy);
  if (i != 0)
    abort ();
  return 0;
}

