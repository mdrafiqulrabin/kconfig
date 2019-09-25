 
 
 
 

struct S1
{
  unsigned char pad1;
  unsigned char val;
  unsigned short pad2;
};

extern struct S1 t;

struct S1 test_and (struct S1 a)
{
  a.val &= t.val;

  return a;
}

 

struct S1 test_or (struct S1 a)
{
  a.val |= t.val;

  return a;
}

 

struct S1 test_xor (struct S1 a)
{
  a.val ^= t.val;

  return a;
}

 

struct S1 test_add (struct S1 a)
{
  a.val += t.val;

  return a;
}

 

