 
 

__extension__ typedef __UINTPTR_TYPE__ uintptr_t;

extern int glob1;

float
foo (void)
{
  return (float) (int) (uintptr_t) &glob1;
}

