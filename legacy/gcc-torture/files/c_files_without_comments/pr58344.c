 
 

struct U {};
static struct U a[1];
extern void bar (struct U);

void
foo (void)
{
  bar (a[0]);
}

