 
 
 
 

typedef int __attribute__ ((aligned (1 << 28))) int28;
int28 foo[4] = {};  
typedef int __attribute__ ((aligned (1 << 29))) int29;  

void
f (void)
{
  struct { __attribute__((aligned (1 << 28))) double a; } x1;
  struct { __attribute__((aligned (1 << 29))) double a; } x2;  
}

