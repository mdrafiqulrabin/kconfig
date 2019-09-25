 
 

void
foo (const char *p, int cond, int a, int b)
{
  p[cond ? a : b] = '\0';	 
}

 

