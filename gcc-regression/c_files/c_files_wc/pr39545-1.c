 
 
 
 

struct flex
{
  int i;
  int flex [];
};

int
foo (struct flex s)
{
  return s.i;
}

struct flex
bar (int x)
{  
  struct flex s;
  s.i = x;
  return s;
}

