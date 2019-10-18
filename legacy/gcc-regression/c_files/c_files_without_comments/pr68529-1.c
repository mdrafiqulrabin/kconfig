 
 

void bar(char *s);
int foo()
{
  char c[10000] = {};
  unsigned short nchar = 9999;

  while(nchar-- != 0)
    {
      c[nchar] = 'A';
    }

  bar (c);
  return 0;
}

 
 

