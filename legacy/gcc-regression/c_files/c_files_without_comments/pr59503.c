 
 

int
main (void)
{
  long long int a = 14;
  long int b = 9;
  asm volatile ("" : "+r" (a), "+r" (b));
  if ((a - b) != 5)
    __builtin_abort ();
  return 0;
}

