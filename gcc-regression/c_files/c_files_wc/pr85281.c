 
 
 
 
 

typedef char V __attribute__ ((__vector_size__ (64)));

V
foo (V v)
{
  v[8] /= (unsigned __int128) 0;
  v[0] -= ~255;
  return v;
}

