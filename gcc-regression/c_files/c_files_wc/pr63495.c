 
 
 

struct __attribute__ ((aligned (8))) S { char c; };
_Static_assert (_Alignof (struct S) >= 8, "wrong alignment");

