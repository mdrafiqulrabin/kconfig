 

char a3[3];
char a4[4];
char d[3];

void g (int i)
{
  const char *s = i < 0 ? a3 : a4;
  __builtin_sprintf (d, "%s", s);       
  return;
}

void f ()
{
  char des[3];
  char src[] = "abcd";
  __builtin_sprintf (des, "%s", src);  
  return;
}

