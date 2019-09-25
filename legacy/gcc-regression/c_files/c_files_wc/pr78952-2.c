 
 
 
 
 

struct S1
{
  char pad1;
  char val;
  short pad2;
};

struct S1 foo (struct S1 a, int b)
{
  a.val = b >> 8;

  return a;
}

 

