 
 

void bar(char *s);
int foo(unsigned short l)
{
  char c[10000] = {};
  unsigned short nchar = 9999;

  if (nchar <= l)
    return -1;

  while(nchar-- != l)
    {
      c[nchar] = 'A';
    }

  bar (c);
  return 0;
}

 
 

