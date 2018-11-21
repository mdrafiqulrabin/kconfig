 
 
 

typedef int c __attribute__ ((__vector_size__ (16)));

__attribute__((always_inline)) void d (void);  
void f(c x);

inline void e (c *b) {
    f (*b);
}

void a ()
{
  struct
    {
      c g[4];
    } h;
  d ();
  e (h.g);
}


