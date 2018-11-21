 
 
 

typedef signed char V __attribute__((vector_size (8))); 

void
foo (V *a) 
{ 
  *a = *a * (V) { 3, 4, 5, 6, 7, 8, 9, 10 }; 
}

