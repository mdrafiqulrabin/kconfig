 
 
 
 
 

int other_func (long long);
int
test_00 (unsigned long long a, unsigned long long b)
{
  if ((a - b) > 0xFFFFFFFFLL)
    return other_func (a - b);
  return 20;
}

