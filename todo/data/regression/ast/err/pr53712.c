 
 

typedef char v16qi __attribute__ ((__vector_size__ (16)));

int test (const char *s1, const char *s2)
{
  v16qi s1chars = __builtin_ia32_loaddqu ((const char *) s2);
  v16qi s2chars = __builtin_ia32_loaddqu ((const char *) s1);
  return __builtin_ia32_pcmpistri128 (s1chars, s2chars, 0);
}

 

