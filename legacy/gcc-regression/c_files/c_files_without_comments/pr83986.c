 
 
 

int v;

int
foo (int x)
{
  v &= !!v && !!x;
  if (v != 0)
    foo (0);
  return 0;
}

