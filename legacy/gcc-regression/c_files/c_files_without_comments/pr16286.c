 
 
 

 

#include <altivec.h>
#undef vector
#undef pixel
#undef bool

void test(void)
{
        __vector unsigned int a, b;
	__vector __pixel v0;
	__vector __bool v1;

        a = vec_and(a, b);
	vec_step (b);
}

 
 
 

