 
 

struct S;
char foo (struct S *);
struct S a;	 
int b;

void
bar ()
{
  b &= foo (&a);
}

