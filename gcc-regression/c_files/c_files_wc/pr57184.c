 
 
 

struct S {};
void bar (struct S *const);
static struct S *const c = &(struct S) {};

void
foo (void)
{
  bar (c);
}

