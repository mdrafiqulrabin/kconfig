 
 

 

#include <stdlib.h>

struct S
{
    unsigned char a, b;
} ab = {12, 34};

void yoo (struct S y)
{
    __asm volatile ("ldi %B0, 56" : "+y" (y));
    y.a = 0;
    __asm volatile ("; y = %0" : "+y" (y));
    ab = y;
}

int main ()
{
    yoo (ab);

    if (ab.a != 0)
        abort();

    if (ab.b != 56)
        abort();

    exit (0);
    
    return 0;
}

