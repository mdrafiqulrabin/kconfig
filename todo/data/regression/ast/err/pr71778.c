 
 
 
 

typedef __simd128_int32_t int32x4_t;

__extension__ extern __inline int32x4_t
__attribute__  ((__always_inline__, __gnu_inline__, __artificial__))
vshrq_n_s32 (int32x4_t __a, const int __b)
{
   
  return (int32x4_t)__builtin_neon_vshrs_nv4si (__a, __b);  
}

int32x4_t
shift (int32x4_t a, int b)
{
  return vshrq_n_s32 (a, b);
}


