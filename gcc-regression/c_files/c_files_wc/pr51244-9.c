 
 
 
 
static inline unsigned int
test_03_00 (unsigned int x)
{
   
  unsigned int res;
  return res;
}

struct S
{
  unsigned int a;
  unsigned int b;
};

int test_03 (struct S* i)
{
 if ((i->a != 2 && i->a != 3) || i->a > test_03_00 (i->b))
   return -5;

 return -55;
}

