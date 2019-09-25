 
 
 
 

int 
test(int n)
{
  if ((n & -n) != n)
    __builtin_unreachable();
  return n;
}

