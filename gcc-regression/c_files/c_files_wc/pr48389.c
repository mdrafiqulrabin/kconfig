 
 
 
 
typedef float V2SF __attribute__ ((vector_size (128)));
V2SF foo (int x, V2SF a)
{
  V2SF b = {};
  if (x & 42)
    b = a;
  a += b;
  return a;
}

