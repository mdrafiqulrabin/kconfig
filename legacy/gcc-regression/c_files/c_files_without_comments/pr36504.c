 
 
 
 

struct A { struct { int a; } b[8]; };
struct B { int c; int d; };
struct C { struct B d; };

void bar (struct C *, int);

struct B
foo (struct C *p, struct A *e, int b)
{
  struct B q;
  bar (p, e->b[b].a);
  return q;
}

void
baz (int b, struct A *e)
{
  struct C p;
  for (; b; ++b)
    p.d = foo (&p, e, b);
}

