 
 
 
 

typedef long long __m256i __attribute__ ((__vector_size__ (32), __may_alias__));

extern __m256i y;

void
bar (__m256i x)  
{
  y = x;
}

