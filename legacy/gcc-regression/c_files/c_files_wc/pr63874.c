 
 
 

extern void __attribute__((weak)) foo_weakref (void);
void __attribute__((weak, noinline)) bar (void)
{
 return;
}
void (*f) (void);
void (*g) (void);

int
main (void)
{
 f = &foo_weakref;
 g = &bar;
 return 0;
}

 
 

