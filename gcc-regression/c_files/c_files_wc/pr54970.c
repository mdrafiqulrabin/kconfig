 
 
 
 

#include "../nop.h"

int
main ()
{
  int a[] = { 1, 2, 3 };	 
  int *p = a + 2;		 
  int *q = a + 1;		 
				 
  asm volatile (NOP);		 
  *p += 10;			 
				 
				 
				 
  asm volatile (NOP);		 
  *q += 10;			 
				 
				 
				 
  asm volatile (NOP);		 
  __builtin_memcpy (&a, (int [3]) { 4, 5, 6 }, sizeof (a));
				 
				 
				 
				 
  asm volatile (NOP);		 
  *p += 20;			 
				 
				 
				 
  asm volatile (NOP);		 
  *q += 20;			 
				 
				 
				 
				 
				 
				 
				 
  asm volatile (NOP);		 
  return 0;
}

