 
 
 

extern void g(int *x);

void __attribute__((naked)) f(void)
{
    int x = 0;  
    g(&x);
}

