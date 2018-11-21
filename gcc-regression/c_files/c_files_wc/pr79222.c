 

extern char* stpcpy (char*, const char*);

char d[3];

char* f (int i)
{
  const char *s = i < 0 ? "01234567" : "9876543210";
  return stpcpy (d, s);    
}

