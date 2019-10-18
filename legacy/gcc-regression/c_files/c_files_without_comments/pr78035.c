 
 

extern int a;
extern int b;
extern int c;

int foo(int choose_a)
{
  int *p;
  if (choose_a)
    p = &a;
  else
    p = &b;
  return p != &c;
}

int bar ()
{
  return &a != &c;
}

 
 

