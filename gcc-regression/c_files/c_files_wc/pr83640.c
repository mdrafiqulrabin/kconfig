 

char *foo (void);

void
bar (char *b, char *c)
{
  b = c;
  c = foo ();
  __builtin_strcat (c, "*/");
  __builtin_strcat (c, b);
}

