 
 
 

extern const signed char a;

int
foo (signed char x)
{
  return x;
}

int
main ()
{
  foo (a);
  return 0;
}

