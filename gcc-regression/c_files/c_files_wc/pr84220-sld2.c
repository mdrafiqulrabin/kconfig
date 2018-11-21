 
 
 
 
 

#include <altivec.h>

typedef  vector  bool long long vbl_t;
typedef  vector  signed long long vsl_t;
typedef  vector  unsigned long long vul_t;
typedef  vector  double vd_t;

void 
test_vbl ( vbl_t v1, vbl_t v2, vbl_t v3 )  \
{
  __builtin_vec_sld(v1, v2, v3);  
  __builtin_vec_sld(v1, v2, 3);
}

void 
test_vsl ( vsl_t v1, vsl_t v2, vsl_t v3 )  \
{
  __builtin_vec_sld(v1, v2, v3);  
  __builtin_vec_sld(v1, v2, 3);
}

void 
test_vul ( vul_t v1, vul_t v2, vul_t v3 )  \
{
  __builtin_vec_sld(v1, v2, v3);  
  __builtin_vec_sld(v1, v2, 3);
}

void 
test_vd ( vd_t v1, vd_t v2, vd_t v3 )  \
{
  __builtin_vec_sld(v1, v2, v3);  
  __builtin_vec_sld(v1, v2, 3);
}

