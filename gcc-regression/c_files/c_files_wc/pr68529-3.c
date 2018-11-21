 
 

void bar(char *s);
int foo1(unsigned short l)
{
  char c[10000] = {};
  unsigned short nchar = 9999;

  while(nchar-- != l)
    {
      c[nchar] = 'A';
    }

  bar (c);
  return 0;
}

int foo2()
{
  char c[100000] = {};
  unsigned short nchar;

  for (nchar = 0; nchar != 1000; --nchar)
    {
      c[nchar] = 'A';
    }

  bar (c);
  return 0;
}

int foo3()
{
  char c[100000] = {};
  unsigned short nchar;

  for (nchar = 0; nchar != 1000; nchar += 3)
    {
      c[nchar] = 'A';
    }

  bar (c);
  return 0;
}

 

