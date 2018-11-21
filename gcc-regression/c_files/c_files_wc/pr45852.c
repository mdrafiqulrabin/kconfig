 
 
 
 

struct S { int s; };

volatile struct S globvar __attribute__((visibility ("hidden"))) = { -6 };

void
foo (void)
{
  globvar = globvar;
}

 

