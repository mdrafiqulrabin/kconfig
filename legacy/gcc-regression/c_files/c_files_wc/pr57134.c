 
 
 
 

#include <stdint.h>

typedef struct {
  int64_t counter;
} atomic64_t;

struct buffer_page {
  void *a, *b;
  atomic64_t entries;
};

static __inline__ __attribute__((always_inline)) int64_t
atomic64_read(const atomic64_t *v)
{
 int64_t t;
 __asm__ __volatile__("" : "=r"(t) : "m"(v->counter));
 return t;
}

int rb_remove_pages(void *p)
{
  struct buffer_page *blah = (void *)((intptr_t) p & -4);
  return atomic64_read(&blah->entries);
}

