 
 
 

__attribute__ ((noinline))
int foo (int a, unsigned b)
{
  int c = 1;
  b =  a ? 12 : 13;
  c = b << 8;
  if (c == 3072)
    ;
  else
    __builtin_abort ();
  return 0;
}

int main ()
{
  volatile unsigned b = 1U;
  foo (-1, b);
}

 
 
 

