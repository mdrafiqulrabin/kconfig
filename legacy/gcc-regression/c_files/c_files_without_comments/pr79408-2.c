 
 
 

void link_error (void);

void
foo (unsigned int y)
{
  if (y <= 7312)
    return;
  if (7312 % y != 7312)
    link_error ();
}

void
bar (int x, int y)
{
  if (y <= 7312)
    return;
  if (7312 % y != 7312)
    link_error ();
}

void
baz (int x, int y)
{
  if (y <= 7312)
    return;
  if (-7312 % y != -7312)
    link_error ();
}

 

