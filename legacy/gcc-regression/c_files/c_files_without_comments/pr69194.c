 
 
 
 
 

typedef __simd128_float32_t float32x4_t;

float32x4_t
sub (float32x4_t a, float32x4_t b, float32x4_t c, float32x4_t d, float32x4_t e)
{
  return __builtin_neon_vld1v4sf((const float *)&e);
}

