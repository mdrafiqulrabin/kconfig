 
 

struct S { int s; };
union U { int s; };
enum E { A };

void
f (void)
{
  S s;  
  U u;  
  E e;  
}

void
g (void)
{
  struct T { int i; };
  union V { int i; };
  enum F { J };
  T t;  
  V v;  
  F f;  
}

