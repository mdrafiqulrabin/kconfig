 
 
 
 
 

typedef short V __attribute__ ((vector_size (32)));

int
foo (V *p)
{
  V v = *p;
  v >>= v;
  v -= v[0];
  return v[3];
}

