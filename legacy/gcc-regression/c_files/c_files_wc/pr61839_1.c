 
 
 
 

__attribute__ ((noinline))
int foo ()
{
  int a = -1;
  volatile unsigned b = 1U;
  int c = 1;
  c = (a + 972195718) >> (1LU <= b);
  if (c == 486097858)
    ;
  else
    __builtin_abort ();
  return 0;
}

__attribute__ ((noinline))
int bar ()
{
  int a = -1;
  volatile unsigned b = 1U;
  int c = 1;
  c = (a + 972195718) >> (b ? 2 : 3);
  if (c == 243048929)
    ;
  else
    __builtin_abort ();
  return 0;
}

int main ()
{
  foo ();
  bar ();
}

 
 
 
 
 

