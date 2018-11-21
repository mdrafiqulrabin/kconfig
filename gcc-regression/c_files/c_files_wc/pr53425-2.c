 
 
 
 

typedef float __v2sf __attribute__ ((__vector_size__ (8)));

extern __v2sf x;

extern void bar (__v2sf);
void
foo (void)
{
  bar (x);  
}

