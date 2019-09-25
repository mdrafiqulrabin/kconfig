 
 
 
 
 

typedef float __m128 __attribute__ ((__vector_size__ (16)));

extern void bar (__m128 *, int);

void
foo (__m128 *x)
{
  __m128 b __attribute__ ((aligned(128))) = *x;
  bar (&b, __alignof__ (x));
}

