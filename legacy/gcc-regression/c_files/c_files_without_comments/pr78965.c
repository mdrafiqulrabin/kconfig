 
 
 
 

int
main ()
{
  int a = 5, b = 6;
  int c = __builtin_snprintf (0, 0, "a%nb%nc", &a, &b);
  if (a + b + c != 6)
    __builtin_abort ();
  return 0;
}

