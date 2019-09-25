 
 
 
 
 

typedef double V __attribute__((vector_size (256)));
typedef __typeof ((V) {} < (V) {}) T;
T a, b;

__attribute__((noinline, noclone, optimize ("finite-math-only"))) void
foo (V *x)
{
  V z = *x;
  a = z <= z;
}

 

__attribute__((noinline, noclone, optimize ("no-finite-math-only"))) void
bar (V *x)
{
  V z = *x;
  b = z <= z;
}

 

