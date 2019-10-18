 
 
 
 
 

typedef long V __attribute__((__vector_size__(32)));

extern void foo (V *, V*);

 

void
foo(V *p, V *q)
{
  V v = *q;
  *p = v << v[0];
}

 

