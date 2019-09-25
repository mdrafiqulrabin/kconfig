 
 
 
 
 
 
 
 

#include <math.h>

static const float pi = 3.14159265359f;

float
test00 (int x)
{
   
  return sinf ( (x >> 8) * (2*pi) / (1 << 16));
}

float
test01 (int x)
{
   
  return sinf (x * (2*pi) / 65536);
}

float
test02 (int x)
{
   
  return sinf (x * (2*pi / 65536));
}

float
test03 (int x)
{
   
  float scale = 2*pi / 65536;
  return sinf (x * scale);
}

float
test04 (int x)
{
   
  return cosf (x / 65536.0f * 2*pi);
}

float
test05 (int x)
{
   
  float scale = 2*pi / 65536;
  return sinf (x * scale) * cosf (x * scale);
}

float
test_06 (float x)
{
   
  return sinf (x);
}

