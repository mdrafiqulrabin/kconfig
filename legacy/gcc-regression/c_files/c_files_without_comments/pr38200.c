 
 
 

typedef int (*callptr) (void);
int foo (void **x);
void foo2 (callptr *);
int (*foo_ptr) (void **x) = foo;

void
bar (void)
{
  void *ptr;
  foo2 ((callptr *) &ptr);
  *(void **) &foo_ptr = ptr;
}

