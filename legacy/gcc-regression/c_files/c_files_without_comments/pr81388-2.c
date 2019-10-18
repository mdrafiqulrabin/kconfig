 
 

void bar();
void foo(unsigned dst)
{
  unsigned end = dst;
  do {
    bar();
    dst += 2;
  } while (dst < end);
}

 

