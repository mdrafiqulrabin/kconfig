 
 

extern void foo (void);
extern void bar (int, int, int, int, int, int, void *);

void
x (void)
{
  bar (1, 2, 3, 4, 5, 6, foo);
}

