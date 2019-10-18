 
 
 

int
main ()
{
  long long int l = -__LONG_LONG_MAX__ - 1;
  unsigned int u;
  u = -l;
  asm volatile ("" : "+r" (u));
  return 0;
}

 

