 
 
 

typedef int __v4si __attribute__ ((__vector_size__ (16)));

int test (__v4si __A)
{
  return __builtin_ia32_vec_ext_v4si (__A, 0);
}

