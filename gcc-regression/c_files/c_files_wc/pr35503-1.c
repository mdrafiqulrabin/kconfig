 
 

int foo (char *__restrict buf, const char *__restrict fmt, ...);

void f(void)
{
  char buf[100] = "hello";
  foo (buf, "%s-%s", buf, "world");  
}

