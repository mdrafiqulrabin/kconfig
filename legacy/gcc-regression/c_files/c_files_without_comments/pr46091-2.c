 
 

unsigned long long test (unsigned long long a)
{
  return a | (1ull << 55);
}

extern unsigned long long m;

void testm (void)
{
  m |= (1ull << 45);
}

 

