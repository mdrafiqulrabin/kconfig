 
 
 

typedef signed char V __attribute__((vector_size (8)));

void
foo (V *a, V *b)
{
  *a = *b * 3;
}

void
bar (V *a, V *b)
{
  *a = *b * 4;
}

