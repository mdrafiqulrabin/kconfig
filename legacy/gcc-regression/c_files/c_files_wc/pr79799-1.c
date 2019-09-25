 
 
 
 

#include <altivec.h>

 

vector float
insert_arg_0 (vector float vf, float f)
{
  return vec_insert (f, vf, 0);
}

vector float
insert_arg_1 (vector float vf, float f)
{
  return vec_insert (f, vf, 1);
}

vector float
insert_arg_2 (vector float vf, float f)
{
  return vec_insert (f, vf, 2);
}

vector float
insert_arg_3 (vector float vf, float f)
{
  return vec_insert (f, vf, 3);
}

 
 
 
 
 
 
 
 
 

