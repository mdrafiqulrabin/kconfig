 
 
 
 

unsigned long foo_11(__vector __int128_t *p)
{
  return __builtin_unpack_vector_int128(*p, 11);  
}

unsigned long foo_n(__vector __int128_t *p, unsigned long n)
{
  return __builtin_unpack_vector_int128(*p, n);	 
}

