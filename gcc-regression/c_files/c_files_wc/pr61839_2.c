 
 
 
 

__attribute__ ((noinline))
int foo ()
{
  int a = -1;
  volatile unsigned b = 1U;
  int c = 1;
  c = (a + 972195718) / (b ? 2 : 0);
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
  c = (a + 972195718) % (b ? 2 : 0);
  if (c == 1)
    ;
  else
    __builtin_abort ();
  return 0;
}

__attribute__ ((noinline))
int bar2 ()
{
  int a = -1;
  volatile unsigned b = 1U;
  int c = 1;
  c = (a + 972195716) % (b ? 1 : 2);
  if (c == 0)
    ;
  else
    __builtin_abort ();
  return 0;
}


 
 
 
 
 
 

