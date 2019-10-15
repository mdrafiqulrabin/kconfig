 

 
 
 
 

#include <arm_neon.h>

#define GEN_TEST(T, D, C, R) \
  R test_##C##_##T (T a) { return C (a, D (0)); }

#define GEN_DOUBLE_TESTS(S, T, C) \
  GEN_TEST (T, vdup_n_s##S, C##_s##S, u##T) \
  GEN_TEST (u##T, vdup_n_u##S, C##_u##S, u##T) 

#define GEN_QUAD_TESTS(S, T, C) \
  GEN_TEST (T, vdupq_n_s##S, C##q_s##S, u##T) \
  GEN_TEST (u##T, vdupq_n_u##S, C##q_u##S, u##T) 

#define GEN_COND_TESTS(C) \
  GEN_DOUBLE_TESTS (8, int8x8_t, C) \
  GEN_DOUBLE_TESTS (16, int16x4_t, C) \
  GEN_DOUBLE_TESTS (32, int32x2_t, C) \
  GEN_QUAD_TESTS (8, int8x16_t, C) \
  GEN_QUAD_TESTS (16, int16x8_t, C) \
  GEN_QUAD_TESTS (32, int32x4_t, C)

GEN_COND_TESTS(vcgt)
GEN_COND_TESTS(vcge)
GEN_COND_TESTS(vclt)
GEN_COND_TESTS(vcle)
GEN_COND_TESTS(vceq)

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

 
 

 

