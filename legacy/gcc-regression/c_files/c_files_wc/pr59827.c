 
 

int
foo (int p[2][])  
{
  return p[0][0];
}

void
bar (void)
{
  int p[2][1];
  foo (p);  
}

