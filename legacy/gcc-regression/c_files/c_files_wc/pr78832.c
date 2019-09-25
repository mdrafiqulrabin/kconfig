 
 
 

void bar (int *);

int
foo (int x)
{
  int *f = 0;
  if (x)
    goto lab;
  {
    int y, z;
    bar (&y);
    int *d = &y;
    bar (&z);
    int *e = &z;
  }
  f = &x;
  lab: return 6;
}

