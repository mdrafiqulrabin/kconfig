 
 
 
 

typedef int V __attribute__ ((vector_size (64)));

V
foo (V u, V v)
{
  v[0] |= v[u[0]];
  u /= ((V)v)[0];
  return u;
}

