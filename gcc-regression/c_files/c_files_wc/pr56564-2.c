 
 
 

struct S { long a, b; } s = { 5, 6 };
char t[16] = { 7 };

int
foo (void)
{
  return ((__UINTPTR_TYPE__) &s) & 15;
}

int
bar (void)
{
  return ((__UINTPTR_TYPE__) &t[0]) & 15;
}

 
 
 
 
 

