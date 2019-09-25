 
 
 

int a;

int
foo (int x)
{
  int b = a;
  {
    int c;
    int *d = (x == 0) ? &c : &b;

    for (a = 0; a < 2; ++a)
      c = (x + b) < a;

    return *d;
  }
}

