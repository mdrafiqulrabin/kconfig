 
 
 

typedef double __v2df __attribute__ ((__vector_size__ (16)));
typedef double __v4df __attribute__ ((__vector_size__ (32)));

__v2df
foo (__v4df x)
{
  return __builtin_ia32_pd_pd256 (x);
}

