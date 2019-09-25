 
 

typedef int __v4si __attribute__ ((__vector_size__ (16)));
typedef float __v4sf __attribute__ ((__vector_size__ (16)));

int fooSI_1(__v4si *val)
{
  return __builtin_ia32_vec_ext_v4si(*val, 1);
}
 

int fooSI_2(__v4si *val)
{
  return __builtin_ia32_vec_ext_v4si(*val, 2);
}
 

float fooSF_2(__v4sf *val)
{
  return __builtin_ia32_vec_ext_v4sf(*val, 2);
}
 

float fooSF_3(__v4sf *val)
{
  return __builtin_ia32_vec_ext_v4sf(*val, 3);
}
 

