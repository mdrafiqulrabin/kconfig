 
 
 
 

int
main()
{
  __attribute__((altivec(vector__))) unsigned int test, res;
  const int s0 = 0;
  int mask;

   
  res = __builtin_crypto_vshasigmaw (test, 1, 0xff);  
  return 0;
}

