 
 
 

extern void abort (void);

int
foo (void)
{
  double d;
  int i;
  for (i = 0, d = 0; i < 64; i++)
    d--;
  return (int) d;
}

int
main ()
{
  if (foo () != -64)
    abort ();
  return 0;
}

