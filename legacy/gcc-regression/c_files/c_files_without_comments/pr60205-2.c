 
 
 
 

typedef int __v16si __attribute__ ((__vector_size__ (64)));

extern __v16si x;

__v16si
foo (void)
{  
  return x;
}

