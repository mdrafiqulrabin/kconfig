 
 
 

struct S { struct S *a, *b; };

void
foo (struct S *x)
{
  do
    x->b = x->a;
  while (x = x->a);
}

