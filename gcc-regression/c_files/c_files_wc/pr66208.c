 
 

void foox (char*, ...) __attribute__ ((nonnull (1)));
#define foo(p) foox (p, "p is null")  

void baz (void)
{
  foo (0);  
}

