 

int main (void)
{
  char *d = (char *)__builtin_alloca (12);   

  __builtin_sprintf (d, "%32s", "x");    

  return 0;
}

