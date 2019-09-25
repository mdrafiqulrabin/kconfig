 
 
 
 
 

struct S1
{
  char pad1;
  char val;
  short pad2;
};

struct S1 foo (struct S1 a, struct S1 b)
{
  a.val = b.val;

  return a;
}

 

