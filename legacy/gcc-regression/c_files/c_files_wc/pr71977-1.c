 
 
 
 
 

#include <stdint.h>

typedef union
{
  float value;
  uint32_t word;
} ieee_float_shape_type;

float
mask_and_float_var (float f, uint32_t mask)
{ 
  ieee_float_shape_type u;

  u.value = f;
  u.word &= mask;

  return u.value;
}

 
 
 
 
 
 

