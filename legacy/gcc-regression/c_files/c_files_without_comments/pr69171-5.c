 
 

__extension__ typedef __UINTPTR_TYPE__ uintptr_t;

extern int glob1;

float
foo (void)
{
  return (float) (long long) (uintptr_t) &glob1;
}

