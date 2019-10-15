 
 
 
 

#include <altivec.h>

vector unsigned long long
test_sra (vector unsigned long long x, vector unsigned long long y)
{
  return vec_sra (x, y);
}

vector unsigned long long
test_vsrad (vector unsigned long long x, vector unsigned long long y)
{
  return vec_vsrad (x, y);
}

 


