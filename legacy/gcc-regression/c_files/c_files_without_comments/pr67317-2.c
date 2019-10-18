 
 
 

typedef unsigned long long u64;

u64 testcarry_u64 (u64 a, u64 b, u64 c, u64 d)
{
  u64 result0, result1;

  __builtin_ia32_addcarryx_u64
    (__builtin_ia32_addcarryx_u64 (0, a, c, &result0), b, d, &result1);

  return result0 ^ result1;
}

 
 

