 
 
 

static inline unsigned int rotl (unsigned int x, int k)
{
  return (x << k) | (x >> (32 - k));
}

unsigned long long test (unsigned int z)
{
  return rotl (z, 55);
}

