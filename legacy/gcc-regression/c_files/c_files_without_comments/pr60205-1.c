 
 
 
 
 

typedef int __v16si __attribute__ ((__vector_size__ (64)));

extern __v16si x;

extern void bar (__v16si);
void
foo (void)
{
  bar (x);  
}

