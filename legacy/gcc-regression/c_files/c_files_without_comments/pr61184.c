 
 

short a; 

void
foo (void)
{
  for (a = 0; a >= 0; a++)
    ;
}

int
main ()
{
  foo ();
  return 0;
}

