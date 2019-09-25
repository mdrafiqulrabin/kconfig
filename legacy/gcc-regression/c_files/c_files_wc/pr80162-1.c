 
 
 

typedef int v8 __attribute__ ((vector_size (8)));
struct U { v8 a; v8 b; };
register struct U u asm ("xmm7");

int *
foo (int i)
{
  return &u.a[i];	 
}

