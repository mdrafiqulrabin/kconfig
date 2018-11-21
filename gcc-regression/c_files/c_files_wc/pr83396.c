 
 
 

int bar (int);
int baz (int);

int
foo (int x)
{
  return bar (x) || baz (x) != 0;
}

