 

int g (int *x, int *y);

void f ()
{
  int x, y;
  char a[4000];

  g (&x, &y);
  x = x/y + x;
}

