 
 

typedef int int32x4_t __attribute__ ((__vector_size__ ((16))));

int32x4_t
test (int32x4_t a, int32x4_t b)  
{  
  return a + b;
}

