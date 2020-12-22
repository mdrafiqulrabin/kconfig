 
 
 

#include <pthread.h>

static volatile int sem1;
static _Atomic  int sem2;

static void *f(void *va)
{
  void **p = va;
  if (*p) return *p;
  sem1 = 1;
  while (!__atomic_load_n(&sem2, __ATOMIC_ACQUIRE));
   
  return *p;
}

int main()
{
  void *p = 0;
  pthread_t thr;
  if (pthread_create(&thr, 0, f, &p))
    return 2;
  while (!sem1);
  __atomic_thread_fence(__ATOMIC_ACQUIRE);
  p = &p;
  __atomic_store_n(&sem2, 1, __ATOMIC_RELEASE);
  pthread_join(thr, &p);
  return !p;
}

