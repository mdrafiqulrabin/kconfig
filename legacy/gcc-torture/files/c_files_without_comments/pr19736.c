 

extern char *strcpy (char *, const char *);
void sdbout_one_type (char *p)
{
  int i, t = 1;
  char *q;
  for (i = 0; i < 2; i++)
    {
      strcpy (p, "1");
      p += sizeof ("1");
    }
  if (t)
    q = "2";
  else
    q = "3";
  strcpy (p, q);
}


