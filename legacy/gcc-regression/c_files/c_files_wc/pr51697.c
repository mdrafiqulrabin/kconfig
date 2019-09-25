 
 
 
 
 

int
test_00 (long long* x)
{
   
  return *x & 0xFFFFFFFF ? -20 : -40;
}

int
test_01 (unsigned long long x)
{
   
  return x >= 0x100000000LL ? -20 : -40;
}

