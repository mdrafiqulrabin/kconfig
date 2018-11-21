 
 
 
 

typedef int __v2si __attribute__ ((__vector_size__ (8)));

extern __v2si x;

__v2si
foo (void)
{  
  return x;
}

