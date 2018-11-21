 
 

int foo(int z0, unsigned z1)
{
  int t0 = (z0 == -1);
  int t1 = (z1 == -1U);
  int t2 = (t0 & t1);
  return t2;
}

 

