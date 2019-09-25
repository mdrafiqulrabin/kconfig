 
 
 

void link_error (void);

void
foo (unsigned int x, unsigned int y)
{
  if (x > 7312)
    return;
  if (y <= 7312)
    return;
  if (x % y != x)
    link_error ();
}

void
bar (int x, int y)
{
  if (x > 7312 || x < 0)
    return;
  if (y <= 7312)
    return;
  if (x % y != x)
    link_error ();
}

void
baz (int x, int y)
{
  if (x > 7312 || x < -7312)
    return;
  if (y <= 7312)
    return;
  if (x % y != x)
    link_error ();
}

 

