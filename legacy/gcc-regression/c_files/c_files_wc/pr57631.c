 
 

void __attribute__((signal)) func1 (void) __asm ("__vector1");
void func1  (void)
{
}

void __attribute__((signal)) func2 (void)  __asm ("__vecto1");
void func2  (void)  
{
}

void __attribute__((signal)) __vector_3 (void)  __asm ("__vecto1");
void __vector_3 (void)  
{
}

