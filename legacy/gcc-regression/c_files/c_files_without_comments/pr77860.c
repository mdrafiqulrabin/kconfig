 
 
 

typedef unsigned short V __attribute__((vector_size (16)));

V
foo (V x, V y)
{
  V a = -x;
  V b = -y;
  return a * b;
}

