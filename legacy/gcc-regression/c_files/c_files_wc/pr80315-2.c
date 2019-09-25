 
 
 
 

int
main ()
{
  __attribute__((altivec(vector__))) unsigned long long test, res;
  const int s0 = 0;
  int mask;

   
  res = __builtin_crypto_vshasigmad (test, 1, 0xff);  
  return 0;
}

