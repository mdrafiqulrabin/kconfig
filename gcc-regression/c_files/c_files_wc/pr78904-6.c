 
 
 
 

typedef __SIZE_TYPE__ size_t;

struct S1
{
  char pad1;
  char val;
  short pad2;
};

extern char t[256];

void foo (struct S1 a, size_t i)
{
  t[i] = a.val;
}

 

