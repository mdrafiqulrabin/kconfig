 
 
 
 

#include <stdlib.h>

long long buffer[32];

void __attribute__((noinline)) f(long long *p, int n)
{
  while (--n >= 0)
    {
      *p = 1;
      p += 32;
    }
}

int main(void)
{
  f(buffer, 1);
  
  if (!buffer[0])
    abort();

  return 0;
}

