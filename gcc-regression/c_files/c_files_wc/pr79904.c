 
 
 

typedef signed char V __attribute__((vector_size (8))); 

void
foo (V *a) 
{ 
  *a = *a * 3; 
}

