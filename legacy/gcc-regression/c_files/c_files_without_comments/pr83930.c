 
 
 

unsigned __attribute__ ((__vector_size__ (16))) v;

static inline void
bar (unsigned char d)
{
  v /= d;
}

__attribute__ ((always_inline)) void
foo (void)
{
  bar (4);
}

