 
 
 

__attribute__((noinline, noclone))
void f (short b)
{
  __builtin_setjmp (0);   
  f (0);
}

static void g (short) __attribute__ ((alias ("f")));

void h ()
{
  g (0);
}

 
 
 

