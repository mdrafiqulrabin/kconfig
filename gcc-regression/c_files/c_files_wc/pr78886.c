 
 

__extension__ typedef __SIZE_TYPE__ size_t;
void *malloc(size_t x);

void foo(void)
{
 volatile int i;
 malloc(1);
 i;
}

