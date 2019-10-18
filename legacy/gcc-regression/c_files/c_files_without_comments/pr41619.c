 
 

struct A {};

int foo();

struct A bar(double x)
{
  double y;
  if (foo())
    y = 1 / x;
  return bar(y);
}

