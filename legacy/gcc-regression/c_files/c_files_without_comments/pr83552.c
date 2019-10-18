 
 

char *b;
char d[100];
void a ();
void
c (void)
{
  __builtin_strcat (d, "12345");
  if (__builtin_strstr (b, d) == b)
    a ();
}

