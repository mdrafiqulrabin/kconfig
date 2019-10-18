 
 
 

const signed char c = -84;
signed char s;

void
foo ()
{
  s = (unsigned short) c / -55;
}

int
main ()
{
  foo ();
  if (s != 90)
    __builtin_abort ();
}

