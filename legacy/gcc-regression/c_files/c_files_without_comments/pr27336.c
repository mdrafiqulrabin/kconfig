 
 

struct B { int x; };
extern void g3(struct B *that)  __attribute__((nonnull));
int f3(struct B *a)
{
  g3(a);
  return a != (void *)0;
}

 

