 
 
 

 

struct S { int a, b, c; } s = { };

void
foo (void)
{
  struct S s = { }; 
  struct S s2 = (struct S){ };
}

