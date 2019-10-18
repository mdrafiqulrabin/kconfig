 

 
 

extern void abort (void);

long long frame_size = 42;

int __attribute__((noinline))
foo  (int a __attribute__((unused)), long long b)
{
  return (int)b;
}

int
main ()
{
    if (frame_size > 0)
    {
      if (foo (0, -frame_size) != -42)
	abort ();
    }
    return 0;
}

