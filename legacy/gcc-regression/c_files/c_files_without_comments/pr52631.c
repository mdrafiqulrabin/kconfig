 
 

unsigned f(unsigned a)
{
#if __SIZEOF_INT__ == 2
  unsigned b = a >> 15;
#else
  unsigned b = a >> 31;
#endif
  return b&1;
}

 
 
 


