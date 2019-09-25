 
 

typedef int int32x4_t __attribute__ ((__vector_size__ ((16))));
extern int32x4_t c;

void
test (int32x4_t a, int32x4_t b)  
{
  c = a + b;
}

