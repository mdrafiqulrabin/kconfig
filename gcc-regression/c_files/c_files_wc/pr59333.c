 
 

long long int __attribute__ ((noinline, noclone))
foo (long long int i, long long int j)
{
  asm ("");
  return i + j;
}

int
main (void)
{
  foo (2LL, __LONG_LONG_MAX__);
  return 0;
}

 

