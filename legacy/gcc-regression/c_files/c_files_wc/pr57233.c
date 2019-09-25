 
 
 

typedef unsigned V4 __attribute__((vector_size(4 * sizeof (int))));
V4 a;

__attribute__((noinline)) void
foo (void)
{
  a = (a << 2) | (a >> 30);
}

 
 

