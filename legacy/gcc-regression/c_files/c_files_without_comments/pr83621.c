 
 
 
 

typedef int __attribute__ ((__vector_size__ (64))) V;
V v;

void
foo ()
{
  V u = v >> 1;
}

