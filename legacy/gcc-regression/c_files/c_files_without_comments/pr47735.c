 
 
 

unsigned
mulh (unsigned a, unsigned b)
{
  unsigned long long l __attribute__ ((aligned (32)))
    = ((unsigned long long) a * (unsigned long long) b) >> 32;
  return l;
}

 
 
 
 

