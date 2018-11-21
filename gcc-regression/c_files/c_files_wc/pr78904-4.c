 
 
 
 

typedef __SIZE_TYPE__ size_t;

struct S1
{
  unsigned char pad1;
  unsigned char val;
  unsigned short pad2;
};

extern unsigned char t[256];

void foo (struct S1 a, size_t i)
{
  t[i] = a.val;
}

 

