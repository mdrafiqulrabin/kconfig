 
 
 

typedef char U __attribute__((vector_size(64)));
typedef __int128 V __attribute__((vector_size(64)));

V
foo (int a, int b, __int128 c, U u)
{
  u = (u >> (u & 7)) | (u << -(u & 7));
  return a + b + c + (V)u;
}

