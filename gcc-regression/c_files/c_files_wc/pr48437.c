 
 
 

#include "../nop.h"

int i __attribute__((used));
int main()
{
  volatile int i;
  for (i = 3; i < 7; ++i)
    {
      extern int i;
      asm volatile (NOP : : : "memory");  
    }
  return 0;
}

