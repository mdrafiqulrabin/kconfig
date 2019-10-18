 
 

extern const unsigned int a[];
extern const unsigned long long b[];

int
fn1 (unsigned int p1, unsigned long long p2)
{
  unsigned int p3;

  p3 = a[p1];
  if (p3 == 0 || p3 > 64)
    return 0;

  p2 &= b[p1];
  return p2 == ((unsigned long long) 1 << (p3 - 1));
}

 

