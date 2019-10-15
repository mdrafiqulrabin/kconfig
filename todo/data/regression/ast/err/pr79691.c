 

char d[2];

 
void f1 (void)
{
  __builtin_sprintf (d, "%i", 123);    
}

 
void f2 (void)
{
  __builtin_snprintf (d, sizeof d, "%i", 1234);    
}

 
int f3 (void)
{
  return __builtin_snprintf (0, 0, "%i", 12345);
}

 
int f4 (int i)
{
  int n1 = __builtin_snprintf (0, 0, "%i", 1234);
  int n2 = __builtin_snprintf (0, 0, "%i", 12345);
  return n1 + n2;
}

 

