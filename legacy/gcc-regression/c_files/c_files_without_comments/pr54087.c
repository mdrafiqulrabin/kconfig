 
 
 
 


int a;

int f1(int p)
{
  return __atomic_sub_fetch(&a, p, __ATOMIC_SEQ_CST) == 0;
}

int f2(int p)
{
  return __atomic_fetch_sub(&a, p, __ATOMIC_SEQ_CST) - p == 0;
}

