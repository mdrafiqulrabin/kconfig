 
 
 
 
 

typedef __int128 V __attribute__((vector_size(64)));

V v;

void
foo()
{
  v ^= (V){1};
}

