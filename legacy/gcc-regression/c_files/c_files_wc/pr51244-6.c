 
 
 
 

float
test_00 (float q[4], float m[9])
{
  float s0 = m[0] + m[1];
  float s1 = m[0] - m[1];

  return q[s0 > s1 ?  0 : 1];
}

