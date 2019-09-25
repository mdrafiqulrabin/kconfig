 
 
 
 
 
 
 

void
f1 (unsigned int a, unsigned int b)
{
  unsigned long long c = a / b;
  unsigned long long d = a % b;
  asm volatile ("" : : "r" (c), "r" (d));
}

void
f2 (int a, int b)
{
  unsigned long long c = (unsigned int) (a / b);
  unsigned long long d = (unsigned int) (a % b);
  asm volatile ("" : : "r" (c), "r" (d));
}

void
f3 (unsigned int a, unsigned int b)
{
  unsigned long long c = a / b;
  asm volatile ("" : : "r" (c));
}

void
f4 (int a, int b)
{
  unsigned long long c = (unsigned int) (a / b);
  asm volatile ("" : : "r" (c));
}

void
f5 (unsigned int a, unsigned int b)
{
  unsigned long long d = a % b;
  asm volatile ("" : : "r" (d));
}

void
f6 (int a, int b)
{
  unsigned long long d = (unsigned int) (a % b);
  asm volatile ("" : : "r" (d));
}

