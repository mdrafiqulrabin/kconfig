 
 

typedef int V __attribute__((vector_size (64)));

void foo (V x, V *y) {	 
   
  *y = x;
}

V bar (V *x) {		 
  return *x;
}

 

