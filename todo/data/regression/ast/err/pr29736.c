 

int __attribute__ ((vector_size (8), vector_size (8))) v;  

extern int __attribute__ ((vector_size (8))) w;
int __attribute__ ((vector_size (8))) w;

void
foo ()
{
  v = v + v;
  w = w + w;
}

