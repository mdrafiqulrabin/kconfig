 
 
 

#include <pthread.h>
#include <stdlib.h>

static _Atomic int sem1;

static void *f(void *va)
{
  void **p = va;
  while (!__atomic_load_n(&sem1, __ATOMIC_ACQUIRE));
  exit(!*p);
}

int main(int argc)
{
  void *p = 0;
  pthread_t thr;
  if (pthread_create(&thr, 0, f, &p))
    return 2;
   
  p = &p;
  __atomic_store_n(&sem1, 1, __ATOMIC_RELEASE);
  int r = -1;
  while (r < 0) asm("":"+r"(r));
  return r;
}

