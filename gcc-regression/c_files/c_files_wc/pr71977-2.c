 
 
 
 
 

#include <stdint.h>

typedef union
{
  float value;
  uint32_t word;
} ieee_float_shape_type;

float
mask_and_float_sign (float f)
{ 
  ieee_float_shape_type u;

  u.value = f;
  u.word &= 0x80000000;

  return u.value;
}

 
 
 
 
 
 

