 
 
 

typedef int V __attribute__((vector_size (16)));

void
foo (V *a, V *b)
{
  V c = { 0, 0, 0, 0 };
  V d = { 1, 2, 3, 4 };
  *a = __builtin_shuffle (*b, c, d);
}

 

