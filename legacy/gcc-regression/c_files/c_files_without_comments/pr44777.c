 
 
 
 
 

 

extern void abort (void);
extern void exit (int);

#ifdef STACK_SIZE
#define DEPTH ((STACK_SIZE) / 512 + 1)
#else
#define DEPTH 1000
#endif

int
x (int a)
{
  __label__ xlab;
  void y (int a)
    {
      void *x = &&llab;
      if (a==-1)
	goto *x;
      if (a==0)
	goto xlab;
    llab:
      y (a-1);
    }
  y (a);
 xlab:;
  return a;
}

int
main ()
{

  if (x (DEPTH) != DEPTH)
    abort ();

  exit (0);
}

