 
 
 
 

typedef int V __attribute__((vector_size (32)));

void
foo (V *a, V *b, V *c)
{
  *a = *b + *c;		 
}

