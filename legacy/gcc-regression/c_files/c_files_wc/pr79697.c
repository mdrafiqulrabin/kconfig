 
 

void f(void)
{
  __builtin_strdup ("abc");
}

void g(void)
{
  __builtin_strndup ("abc", 3);
}

void h(void)
{
  __builtin_realloc (0, 10);
}

 
 
 

