 
 
 

int v;

int
foo (int i)
{
  int t[1], u[1];
  int n = 0;

  if (i)
    {
      t[n] = i;
      u[0] = i;
    }

  v = u[0];		 
  return t[0];		 
}

