 
 
 
 
 
 

struct S1
{
  unsigned long long a;
  unsigned long long b;
};

void
test (int p1, unsigned long long p2, int p3, struct S1 *p4)
{
  int i;

  for (i = 0; i < p1; i++)
    if ((p4[i].a & p2) != p2)
      p4[i].a ^= (1ULL << p3);
}

