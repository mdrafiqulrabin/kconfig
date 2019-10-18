 
 
 

extern int x;

void
test (int i)
{
  x = i;
}

void
bar (int i)
{
  test (i);
}

