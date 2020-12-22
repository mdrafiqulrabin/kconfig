 
 
 

typedef int V __attribute__((vector_size(16)));

void
foo (V *p, V *mask)
{
  *p = __builtin_shuffle (*p, *mask);
}

