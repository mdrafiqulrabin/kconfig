 
 

 
 

extern void abort (void);

static double my_loop(void) __attribute__((noinline));

static double my_loop(void)
{
  double retval = 0.0;
  const unsigned char *start = "\005\b\000";
  const unsigned char *const end = start + 2;

  while (start < end)
    retval += *start++;

  return retval;
}

int main(void)
{
  if (my_loop() != 13.0)
    abort ();

  return 0;
}

