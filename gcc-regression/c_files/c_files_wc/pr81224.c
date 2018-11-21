 
 
 

int a;
int
b ()
{
  register __attribute__ ((__vector_size__ (4 * sizeof (int)))) int c asm("xmm0");
  return c[a];
}

