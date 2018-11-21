 
 

char *strpbrk (const char *, const char *);

char *
test (char *p)
{
  p = strpbrk (p, "");	 
  return p;
}

