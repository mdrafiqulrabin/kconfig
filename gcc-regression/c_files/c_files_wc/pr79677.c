 
 
 
 

void foo (char *);

int
main ()
{
  char s[10] = "%s";
  foo (s);
  __builtin_printf (s);	 
  return 0;
}

