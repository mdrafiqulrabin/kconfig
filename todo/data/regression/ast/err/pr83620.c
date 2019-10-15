 
 
 

typedef unsigned __int128 V __attribute__ ((vector_size (64)));

V u, v;

V
foo (char c, short d, int e, long f, __int128 g)
{
  f >>= c & 63;
  v = (V){f} == u;
  return e + g + v;
}

