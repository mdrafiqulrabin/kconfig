 
 
 
 

int
foo (void)
{
  int i;
  volatile char *p = (volatile char[1]) { 77 };
  for (i = 1; i < 10; i++)
    *p = 4;
  return *p;
}

