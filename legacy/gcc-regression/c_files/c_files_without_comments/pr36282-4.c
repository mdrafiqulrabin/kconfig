 
 

#pragma weak bar
void bar (void);

extern void *baz (void *dest, const void *src, __SIZE_TYPE__ n);
extern __typeof (baz) baz __asm("bazfn");  

void
foo (void)
{
}

