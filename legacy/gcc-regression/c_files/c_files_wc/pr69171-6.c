 
 

__extension__ typedef __UINTPTR_TYPE__ uintptr_t;

extern int glob1;

double
foo (void)
{
  return (double) (long long) (uintptr_t) &glob1;
}

