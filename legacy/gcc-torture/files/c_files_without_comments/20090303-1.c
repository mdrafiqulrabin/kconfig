 

int r (unsigned short *);
void s (unsigned short *, unsigned short *);

int
f (int x)
{
  unsigned short a[1], c[1];

  if (r (a))
    return x;

  if (c[-1])
    s (a, c);

  return 0;
}

