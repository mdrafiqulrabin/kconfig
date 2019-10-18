 
 
 

typedef int V __attribute__ ((vector_size (32)));

V
foo (V x)
{
  return (V) { x[0] };
}

