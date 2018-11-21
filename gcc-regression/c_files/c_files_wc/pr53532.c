 
 
 

struct S {};
extern int foo (struct S);

int
main ()
{
  foo ((struct T) {});	 
  return 0;
}

