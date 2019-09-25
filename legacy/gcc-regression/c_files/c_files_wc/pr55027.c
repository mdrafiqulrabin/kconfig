 
 

typedef double v2df __attribute__ ((__vector_size__ (2 * sizeof (double))));

void f (v2df *x)
{
  *x = 0 + 1 * *x;
}

 

