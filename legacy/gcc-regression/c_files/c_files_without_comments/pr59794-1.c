 
 
 
 

typedef int __v2si __attribute__ ((__vector_size__ (8)));

extern __v2si x;

extern void bar (__v2si);
void
foo (void)
{
  bar (x);  
}

