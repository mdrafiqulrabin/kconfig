 
 
 
 

unsigned int
foo (unsigned short x)
{
  return x ? __builtin_clzs (x) : 16U;
}

