 

void f (int a, int b)
{
  __asm__ ("combine %2, %0" : "=r" (a) : "0" (a), "\n" (b));    
}

