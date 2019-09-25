 
 
 
 
 

struct S1
{
  unsigned char pad1;
  unsigned char val;
  unsigned short pad2;
};

struct S1 foo (struct S1 a, struct S1 b)
{
  a.val = b.val;

  return a;
}

 

