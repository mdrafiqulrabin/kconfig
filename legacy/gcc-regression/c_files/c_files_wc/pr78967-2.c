 
 
 
 
 

typedef __SIZE_TYPE__ size_t;

struct S1
{
  unsigned char pad1;
  unsigned char val;
  unsigned short pad2;
};

extern unsigned char t[256];

struct S1 foo (struct S1 a, size_t i)
{
  a.val = t[i];

  return a;
}

 

