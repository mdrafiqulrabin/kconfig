 
 

__extension__ typedef __UINTPTR_TYPE__ uintptr_t;

extern int glob1;

double
foo (void)
{
  return (double) (int) (uintptr_t) &glob1;
}

