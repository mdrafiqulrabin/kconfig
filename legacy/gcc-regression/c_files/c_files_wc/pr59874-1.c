 
 
 
 

unsigned int
foo (unsigned short x)
{
  return x ? __builtin_ctzs (x) : 16U;
}

