 
 
 
 

int
main ()
{
  int a = 1;
  int c = ({ char b[a + 1]; b[0] = 0; b[0]; });
  return c;
}

