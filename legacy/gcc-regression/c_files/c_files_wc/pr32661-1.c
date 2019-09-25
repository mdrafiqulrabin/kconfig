 
 

typedef long long __m128i __attribute__ ((__vector_size__ (16)));

long long foo_0(__m128i* val)
{
  return __builtin_ia32_vec_ext_v2di(*val, 0);
}

long long foo_1(__m128i* val)
{
  return __builtin_ia32_vec_ext_v2di(*val, 1);
}

 

