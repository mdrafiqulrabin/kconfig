 
 
 

int foo1 __attribute__((warn_if_not_aligned(8)));  

__attribute__((warn_if_not_aligned(8)))
void
foo2 (void)  
{
}

struct foo3
{
  int i : 2 __attribute__((warn_if_not_aligned(8)));  
};

typedef unsigned int __u32
  __attribute__((aligned(4),warn_if_not_aligned(8)));

struct foo4
{
  __u32 i : 2;  
};

