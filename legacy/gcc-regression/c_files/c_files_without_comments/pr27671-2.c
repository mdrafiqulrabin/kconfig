 
 
 
 

extern void abort (void) __attribute__ ((noreturn));
extern void exit (int) __attribute__ ((noreturn));

static void __attribute__ ((noinline))
bar (int k)
{
  int n = k % 2;
  if (n == 0)
    abort ();
}

int
main (void)
{  
  bar (1);
  exit (0);
}

