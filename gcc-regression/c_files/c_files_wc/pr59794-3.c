 
 
 
 
 

typedef int __v8si __attribute__ ((__vector_size__ (32)));

extern __v8si x;

extern void bar (__v8si);
void
foo (void)
{
  bar (x);  
}

