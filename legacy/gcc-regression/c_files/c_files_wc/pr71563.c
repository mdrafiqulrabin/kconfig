 
 
 

void link_error (void);

void
foo (int k)
{
  int t = 1 << ((1 / k) << 8);
  if (t != 1)
    link_error ();
}

void
bar (int k, int l)
{
  int t = l << (k << 8);
  if (t != l)
    link_error ();
}

 

