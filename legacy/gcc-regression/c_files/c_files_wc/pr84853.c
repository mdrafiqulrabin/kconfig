 
 

typedef float V __attribute__((__vector_size__ (16)));
typedef int W __attribute__((__vector_size__ (16)));

void
foo (int x, V *y, V *z, W *w)
{
  *y = *y << x;		 
  *z = *z << *w;	 
}

void
bar (int x, V *y, V *z, W *w)
{
  *y = *y >> x;		 
  *z = *z >> *w;	 
}

