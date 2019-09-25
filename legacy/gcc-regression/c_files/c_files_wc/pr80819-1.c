 
 
 

typedef unsigned long long V __attribute__((vector_size (16)));

V
foo (unsigned long long x, unsigned long long y)
{
  return (V) { x, y };
}

 

