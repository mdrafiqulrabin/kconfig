 
 
 
 

#include <altivec.h>

vector unsigned long long int
main ()
{
  vector unsigned long long int test, res;
  const int s0 = 0;
  int mask;

   
  res = vec_shasigma_be (test, 1, 0xff);  
  return res;
}

