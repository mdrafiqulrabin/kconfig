 
 
#define STR_I(X) #X
#define STR(X) STR_I(X)
#define LINE STR(__LINE__) STR(__LINE__)
int main()
{
  const char *s = LINE;
  if (s[0] != '8' || s[1] != '8')
    __builtin_abort ();
  return 0;
}

