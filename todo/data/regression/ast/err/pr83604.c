 
 
 

typedef short V __attribute__((__vector_size__(64)));

__attribute__((target ("avx512vbmi2"))) V
foo (V x, V y, V z)
{
  return __builtin_ia32_vpshrdv_v32hi (x, y, z);
}

