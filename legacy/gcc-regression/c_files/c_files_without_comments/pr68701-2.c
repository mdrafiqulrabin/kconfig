 
 

 

typedef float V __attribute__((vector_size(16)));

void bar (V a)
{
  volatile V b = a;
}

