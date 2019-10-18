 
 

void foo () __asm__ ("bar");

void
foo ()
{
}

int
main ()
{
  foo ();
  return 0;
}

