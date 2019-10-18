 
 

void bar();
void foo(char *dst)
{
  char *const end = dst;
  do {
    bar();
    dst += 2;
  } while (dst < end);
}

 

