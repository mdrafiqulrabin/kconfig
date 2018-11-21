 
 
 
 

typedef double __v2df __attribute__ ((__vector_size__ (16)));

extern __v2df x;

extern void bar (__v2df);
void
foo (void)
{
  bar (x);  
}

