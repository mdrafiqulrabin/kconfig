 
 
 
typedef long long V __attribute__ ((__vector_size__ (16)));

V
foo (V *a, V *b)
{
  return __builtin_ia32_aesenc128 (*a, *b);	 
}

