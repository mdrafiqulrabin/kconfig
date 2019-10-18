 
 
 

typedef char V __attribute__((vector_size (64)));

int
foo (V u, V v)
{
  v /= u | 1;
  v[18] = 1 | v[8];
  return v[1] + v[6] + v[0] + v[1] + v[18] +  v[2] + v[7];
}

