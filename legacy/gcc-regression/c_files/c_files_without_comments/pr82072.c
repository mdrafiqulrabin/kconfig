 
 
 

int
main ()
{
  long long l = -__LONG_LONG_MAX__ - 1;
  int i = 0;
  asm volatile ("" : "+r" (i));
  i -= l;
  asm volatile ("" : "+r" (i));
  i = -l;
  asm volatile ("" : "+r" (i));
  return 0;
}

 
 

