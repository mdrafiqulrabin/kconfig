 
 
 

struct A a;
typedef struct A B;
struct A {}
foo (B x)
{
  __builtin_abort ();
}

