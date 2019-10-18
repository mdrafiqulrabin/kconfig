 
 

unsigned f(unsigned x, unsigned b)
{
  unsigned t1 = 1U << b;
  unsigned t2 = t1 - 1;
  unsigned t3 = x & t2;
  return t3;
}

 

