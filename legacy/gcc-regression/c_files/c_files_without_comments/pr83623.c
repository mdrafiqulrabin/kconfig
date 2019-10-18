 
 
 
 
 

unsigned short __attribute__ ((__vector_size__ (16))) x;

void
foo (void)
{
  x = x << 8 | x >> 8;
}

