 
 
 

typedef char v16qi __attribute__ ((vector_size (16)));

extern v16qi b, c;

void
foo (int e)
{
  b = c << e;
}

